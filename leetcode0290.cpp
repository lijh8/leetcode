class Solution {
public:
    std::string indexes(const std::string& str) {
        const auto n = str.size();
        std::map<char, int> map;
        std::string s;
        for (int i = 0; i != n; i++) {
            if (map.find(str[i]) == map.end()) {
                map[str[i]] = i;
            }
            s += std::to_string(map[str[i]]) + " "; // space is needed
        }
        return s;
    }

    std::string indexes(const std::vector<std::string>& vec) {
        const auto n = vec.size();
        std::map<std::string, int> map;
        std::string s;
        for (int i = 0; i != n; i++) {
            if (map.find(vec[i]) == map.end()) {
                map[vec[i]] = i;
            }
            s += std::to_string(map[vec[i]]) + " "; // space is needed
        }
        return s;
    }

    bool wordPattern(string pattern, string s) {
        std::istringstream iss(s);
        std::vector<std::string> v;
        std::string word;

        while (iss >> word) {
            v.push_back(word);
        }
        return indexes(pattern) == indexes(v);

    }
};
