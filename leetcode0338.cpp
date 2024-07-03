class Solution {
public:
    vector<int> countBits(int n) {
        std::vector<int> v;
        for (auto i = 0; i <= n; i++){
            v.push_back(std::bitset<32>(i).count());
        }
        return v;
    }
};
