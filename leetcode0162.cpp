class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        return max_element(begin(nums), end(nums)) - begin(nums);
    }
};
