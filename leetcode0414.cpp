class Solution {
public:
    int thirdMax(std::vector<int>& nums) {
        sort(begin(nums), end(nums));
        auto last = unique(begin(nums), end(nums));
        nums.erase(last, end(nums));
        auto k = 3;
        auto n = nums.size();
        k = n >= k ? k : 1;
        return *(crbegin(nums) + k - 1);
    }
};
