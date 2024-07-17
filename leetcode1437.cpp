class Solution {
public:
    bool kLengthApart(std::vector<int>& nums, int k) {
        auto min = LONG_MAX;
        auto last = end(nums);
        for (auto it = begin(nums); it != end(nums); ){
            it = find(it, end(nums), 1);
            if (it != end(nums)){
                if (last != end(nums)){
                    min = std::min(min, it - last - 1);
                }
                last = it;
                ++it;
            }
        }
        return min >= k;
    }
};
