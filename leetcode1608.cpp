class Solution {
public:
    int specialArray(vector<int>& nums) {
        // [3,5]             // 2
        // [0,0]             //-1
        // [0,4,3,0,4]       // 3
        // [3,6,7,7,0]       //-1
        // [3,9,7,8,3,8,6,6] // 6
        // [1,2,3,4,5]       // 3

        for (int i = 0; i != size(nums); i++)
        {
            int cnt = 0;
            for (auto &a : nums)
            {
                if (a >= i + 1)
                {
                    cnt++;
                }
            }
            if (i + 1 == cnt)
            {
                return cnt;
            }
        }
        return -1;
    }
};
