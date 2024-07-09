class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        partition(begin(nums), end(nums), [](const auto &n){
            return n % 2 == 0;
        });
        return nums;
    }
};
