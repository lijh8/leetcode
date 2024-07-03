class Solution {
public:
    int singleNumber(vector<int>& nums) {
        for (const auto e : nums){
            if (auto n = count_if(begin(nums),
                         end(nums),
                         [e](const auto x){
                            return e == x;
                         })
                )
            {
                if (n == 1){
                    return e;
                }
            }
        }
        return 0;
    }
};
