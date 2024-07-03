class Solution {
public:
    std::string reverseStr(std::string s, int k) {
        const auto n = s.length();
        for (auto i = 0UL; i < n; i += 2 * k) {
            reverse(begin(s) + i, begin(s) + std::min(i + k, n));
        }
        return s;
    }
};
