class Solution {
public:
    vector<int> getNoZeroIntegers(int n) {
        for (auto a = 1; a != n; a++) {
            auto b = n - a;
            if ((std::to_string(a) + std::to_string(b)).find('0') == std::string::npos) {
                return {a, b};
            }
        }
        return {};
    }
};
