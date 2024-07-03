class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        auto last = std::remove_if(begin(nums), end(nums), [](const auto &x){
            return x == 0;
        });
        std::fill(last, end(nums), 0);
    }
};
