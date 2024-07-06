class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        const auto n = s.size();
        std::vector<int> res;
        for (auto i = 0; i != n; i++){
            auto min = INT_MAX;
            for (auto j = 0; j != n; j++){
                if (s[j] == c){
                    min = std::min(min, std::abs(j - i));
                }
            }
            res.emplace_back(min);
        }
        return res;
    }
};
