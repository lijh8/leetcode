class Solution
{
public:
    void sortColors(vector<int> &nums)
    {
        size_t N = nums.size();
        for (int i = 0; i != N - 1; i++)
        {
            for (int j = i + 1; j != N; j++)
            {
                if (nums[i] > nums[j])
                {
                    int k = nums[i];
                    nums[i] = nums[j];
                    nums[j] = k;
                }
            }
        }
    }
};
