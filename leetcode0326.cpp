class Solution {
public:
    bool isPowerOf(int number, int base) {
        if (number <= 0 || base <= 0) {
            return false;
        }

        while (number % base == 0) {
            number /= base;
        }

        return number == 1;
    }

    bool isPowerOfThree(int n) {
        return isPowerOf(n, 3);
    }
};
