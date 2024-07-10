class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        std::map<int, size_t> m;
        for (const auto &n: nums){
            m[n]++;
        }
        return find_if(cbegin(m), cend(m), [&](const auto &p){
            return p.second == nums.size() / 2;})->first;
    }
};
