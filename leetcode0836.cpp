class Solution {
public:
    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
        if (rec1[0] == rec1[2] ||
            rec1[1] == rec1[3] ||
            rec2[0] == rec2[2] ||
            rec2[1] == rec2[3])
        {
            return false;
        }

        // return !(rec1[0] >= rec2[2] || // r1的左边在r2的右边往右
        //          rec1[2] <= rec2[0] || // r1的右边在r2的左边往左
        //          rec1[1] >= rec2[3] || // r1的下边在r2的上边往上
        //          rec1[3] <= rec2[1] ); // r1的上边在r2的下边往下

        return (rec1[0] < rec2[2] &&
                rec1[2] > rec2[0] &&
                rec1[1] < rec2[3] &&
                rec1[3] > rec2[1]) ;
    }
};
