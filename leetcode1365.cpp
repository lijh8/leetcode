class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        std::vector<int> v1 = nums;
        std::vector<int> v2;
        sort(begin(v1), end(v1));
        for (const auto &i: nums){
            auto p = equal_range(begin(v1), end(v1), i,
                [](const auto &a, const auto &b){return a < b;});
            auto count = p.first != end(v1) ? p.first - begin(v1) : 0;
            v2.emplace_back(count);
        }
        return v2;
    }
};
