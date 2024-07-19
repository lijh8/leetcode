class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        partial_sum(cbegin(nums), cend(nums), begin(nums));
        return nums;
    }
};
