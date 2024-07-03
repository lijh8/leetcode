class Solution {
public:
    bool isPerfectSquare(int num) {
        int square = std::sqrt(num);
        int power = std::pow(square, 2);
        return power == num;
    }
};
