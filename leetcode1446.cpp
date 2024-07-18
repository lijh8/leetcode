class Solution {
public:
    int maxPower(string s) {
        const auto n = s.size();
        auto max = 1;
        auto count = 1;
        for (auto i = 1; i != n; i++){
            if (s[i] == s[i - 1]){
                count++;
                max = std::max(max, count);
            } else {
                count = 1;
            }
        }
        return max;
    }
};
