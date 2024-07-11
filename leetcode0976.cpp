class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        const auto n = nums.size();
        sort(begin(nums), end(nums), std::greater());
        for (auto i = 0; i != n - 2; i++){
            if (
                //nums[i    ] + nums[i + 1] > nums[i + 2] &&
                nums[i + 1] + nums[i + 2] > nums[i    ] //&&
                //nums[i + 2] + nums[i    ] > nums[i + 1]
                )
            {
                return nums[i    ] + nums[i + 1] + nums[i + 2];
            }
        }
        return 0;
    }
};
