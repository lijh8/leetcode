class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        const auto n = nums.size();
        auto sum = 0;
        for (auto i = 0; i != n - 1; i++){
            for (auto j = i + 1; j != n; j++){
                if (nums[i] == nums[j]){
                    sum++;
                }
            }
        }
        return sum;
    }
};
