class Solution {
public:
    int maxProduct(vector<int>& nums) {
        const auto n = nums.size();
        std::sort(begin(nums), end(nums));
        return (nums[n - 2] - 1) * (nums[n - 1] - 1);
    }
};
