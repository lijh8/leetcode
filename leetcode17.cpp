class Solution {
public:
    std::vector<std::string> combination(const std::vector<std::string> &strings) {
        std::vector<std::string> v1 = {""};
        for (const auto &str : strings) {
            std::vector<std::string> v2;
            for (const auto c : str) {
                for (const auto &s1 : v1) {
                    v2.push_back(s1 + c);
                }
            }
            v1 = v2;
        }
        return v1;
    }

    vector<string> letterCombinations(string digits) {
        std::vector buttons{
            "",
            "","abc","def",
            "ghi","jkl","mno",
            "pqrs","tuv","wxyz",};

        std::vector<std::string> v;
        if (digits.empty()){
            return {};
        }
        for (const auto &d: digits){
            v.push_back((buttons[stoi(std::string(1, d))]));
        }
        return combination(v);
    }
};
