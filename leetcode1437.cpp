class Solution {
public:
    bool kLengthApart(std::vector<int>& nums, int k) {
        auto min = LONG_MAX;
        auto first = begin(nums);
        auto last = begin(nums);
        for (auto i = begin(nums); i != end(nums); ){
            i = first = find(i, end(nums), 1);
            if (first != end(nums)){
                i = last = find(first + 1, end(nums), 1);
                if (last != end(nums)){
                    min = std::min(min, last - first - 1);
                }
            } else {
                min = nums.size();
            }
        }
        return min >= k;
    }
};
