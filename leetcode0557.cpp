class Solution {
public:
    std::string reverseWords(std::string s) {
        const auto n = s.size();
        for (auto i = 0, j = 0; i < n; i = j + 1){
            i = s.find_first_not_of(' ', i);
            j = s.find_first_of(' ', i);
            if (j == std::string::npos){
                j = n;
            }
            reverse(begin(s) + i, begin(s) + j);
        }
        return s;
    }
};
