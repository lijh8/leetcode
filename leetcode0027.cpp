class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        erase_if(nums, [&val](const int n){ return val == n;});
        return nums.size();
    }
};
