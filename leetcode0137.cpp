class Solution {
public:
    int singleNumber(vector<int>& nums) {
        for (const auto &e: nums){
            auto count = std::count(begin(nums), end(nums), e);
            if (count == 1){
                return e;
                break;
            }
        }
        return -1;
    }
};
