class Solution {
public:
    int majorityElement(vector<int>& nums) {
        auto n = nums.size();
        for (const auto e : nums){
            if (auto n2 = count_if(begin(nums),
                         end(nums),
                         [e](const auto x){
                            return e == x;
                         }))
            {
                if (n2 > n / 2){
                    return e;
                }
            }
        }
        return 0;
    }
};
