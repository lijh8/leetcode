class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        stable_partition(begin(nums), end(nums),
            [](const auto &x){return x % 2 == 0;});
        const auto n = nums.size();
        for (int i = 1, j = n / 2 % 2 == 0 ? n / 2 : n / 2 + 1;
            i != n / 2 && j != n;
            i += 2, j += 2)
        {
            swap(nums[i], nums[j]);
        }
        return nums;
    }
};
