class Solution {
public:
    string toLowerCase(string s) {
        std::transform(s.cbegin(), s.cend(), s.begin(), [](unsigned char c) {
            return std::tolower(c);
        });
        return s;
    }
};
