class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        auto p = equal_range(begin(nums), end(nums), target,
            [](const auto &a, const auto &b) {
                return std::tie(a) < std::tie(b);
            }
        );
        return (int) (p.first - begin(nums));
    }
};
