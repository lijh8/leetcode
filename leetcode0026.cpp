class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        for (auto i = begin(nums)+1; i < end(nums); ){
            if (*i == *(i-1)){
                i = nums.erase(i);
            } else {
                ++i;
            }
        }
        return nums.size();
    }
};
