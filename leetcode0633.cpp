class Solution {
public:
    bool judgeSquareSum(int c) {
        for (auto a = 0; a <= std::sqrt(c); a++){
            auto b = sqrt(c - std::pow(a, 2));
            // true: 2.0 == (int)2.0
            // false: 2.1 == (int)2.1
            if (b == (int)b){
                std::cout << a << ", " << b << "\n";
                return true;
            }
        }
        return false;
    }
};
