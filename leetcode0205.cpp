class Solution {
public:
    std::string indexes(const std::string& str) {
        const auto n = str.size();
        std::map<char, int> m;
        std::string s;
        for (int i = 0; i != n; i++) {
            if (m.find(str[i]) == m.end()) {
                m[str[i]] = i;
            }
            s += std::to_string(m[str[i]]) + " "; // space is needed
        }
        return s;
    }

    bool isIsomorphic(std::string s, std::string t) {
        return indexes(s) == indexes(t);
    }
};
