class Solution {
public:
    bool isPrime(int n) {
        if (n <= 1) return false;
        for (auto i = 2; i * i <= n; i++) {
            if (n % i == 0) return false;
        }
        return true;
    }

    int countPrimeSetBits(int left, int right) {
        auto count = 0;
        for (; left <= right; left++){
            if (isPrime(bitset<32>(left).count())){
                count++;
            }
        }
        return count;
    }
};
