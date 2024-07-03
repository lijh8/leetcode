class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(begin(nums), end(nums),
            [](const auto &a, const auto &b){
                return tie(a) < tie(b);
            }
        );
        std::vector<std::vector<int>> v;
        do v.push_back(nums);
        while (next_permutation(begin(nums), end(nums)));
        return v;
    }
};
