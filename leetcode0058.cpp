class Solution {
public:
    int lengthOfLastWord(string s) {
        std::regex pattern(R"(\b\w+\b(?=\W*$))");
        std::smatch match;
        std::regex_search(s, match, pattern);
        return match.str().size();
    }
};
