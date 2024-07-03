class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        auto p = equal_range(begin(nums), end(nums), target,
            [](const auto &a, const auto &b) {
                return std::tie(a) < std::tie(b);
            }
        );
        if (p.first == p.second){
            return {-1, -1};
        } else {
            return {(int) (p.first - begin(nums)), (int) (p.second - begin(nums) - 1)};
        }
    }
};
