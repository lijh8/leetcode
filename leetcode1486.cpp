class Solution {
public:
    int xorOperation(int n, int start) {
        if (n == 1){
            return start;
        }
        auto r = start + 0 * 2;
        for (auto i = 1; i != n; i++){
            r ^= start + i * 2;
        }
        return r;
    }
};
