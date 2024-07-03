class Solution {
public:
    int help(int n){
        auto s = std::to_string(n);
        auto sum = 0;
        for (const auto &c: s){
            sum += (c - '0') * (c - '0');
        }
        return sum;
    }

    bool isHappy(int n) {
        auto x = 0;
        for (;;){
            x = help(n);
            if (x == 1){
                return true;
            } else if (x == 4){
                // unhappy cycling
                // 4 -> 16 -> 37 -> 58 -> 89 -> 145 -> 42 -> 20 -> 4
                return false;
            } else {
                n = x;
            }
        }
    }
};
