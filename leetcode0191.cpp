class Solution {
public:
    int hammingWeight(int n) {
        return std::bitset<sizeof(int) * CHAR_BIT>(n).count();
    }
};
