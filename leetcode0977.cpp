class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        transform(cbegin(nums), cend(nums), begin(nums),
            [](const auto &x){return x * x;});
        sort(begin(nums), end(nums));
        return nums;
    }
};
