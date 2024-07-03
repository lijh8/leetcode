class Solution {
public:
    int maximumGap(vector<int>& nums) {
        auto n = nums.size();
        auto diff = 0;
        if (n < 2){
            return diff;
        }
        std::vector<int> output(n);
        sort(begin(nums), end(nums));
        adjacent_difference(begin(nums), end(nums), begin(output)); //c++20
        return *max_element(begin(output) + 1, end(output));
    }
};
