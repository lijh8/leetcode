class Solution {
public:
    string reverseWords(string s) {
        std::vector<std::string> v;
        std::istringstream iss(s);
        std::string word;
        std::string str;
        while (iss >> word) {
            v.push_back(word);
        }
        str += *crbegin(v);
        for (auto i = crbegin(v) + 1; i != crend(v); ++i){
            str += " " + *i;
        }
        return str;
    }
};
