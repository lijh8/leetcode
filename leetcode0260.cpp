class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        std::vector<int> v;
        for (const auto &e: nums){
            if (count(begin(nums), end(nums), e) == 1){
                v.push_back(e);
            }
        }
        return v;
    }
};
