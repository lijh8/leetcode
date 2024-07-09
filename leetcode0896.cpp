class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        adjacent_difference(begin(nums), end(nums), begin(nums));
        auto increasing = all_of(begin(nums)+1, end(nums),
            [](const auto &n){return n >= 0;});
        auto decreasing = all_of(begin(nums)+1, end(nums),
            [](const auto &n){return n <= 0;});
        return increasing || decreasing;
    }
};
