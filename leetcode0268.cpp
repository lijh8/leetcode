class Solution {
public:
    int missingNumber(vector<int>& nums) {
        const auto n = nums.size();
        sort(begin(nums), end(nums));
        for (auto i = 0; i != n; i++){
            if (nums[i] != i){
                return i;
            }
        }
        // if all the former numbers are not missing,
        // the missing one must be the last one.
        return n;
    }
};
