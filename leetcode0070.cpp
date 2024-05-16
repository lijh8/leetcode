class Solution {
public:
    int climbStairs(int n) {
        int x = 1;
        int y = 0;
        int z = 0;
        for (int i = 1; i <= n; i++)
        {
            z = y;
            y = x;
            x = y + z;
        }
        return x;
    }
};
