class Solution {
public:
    int tribonacci(int n) {
        if (n == 0){
            return 0;
        } else if (n < 3) {
            return 1;
        }
        auto t0 = 0;
        auto t1 = 1;
        auto t2 = 1;
        auto t3 = t0 + t1 + t2;
        for (auto i = 4; i <= n; i++){
            t0 = t1;
            t1 = t2;
            t2 = t3;
            t3 =  t0 + t1 + t2;
        }
        return t3;
    }
};
