class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        auto max = max_element(begin(nums), end(nums));
        if (all_of(begin(nums), end(nums), [&](const auto &e){
            return *max == e || *max >= 2 * e;
        }))
        {
            return max - begin(nums);
        } else {
            return -1;
        }
    }
};
