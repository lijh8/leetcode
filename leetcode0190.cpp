class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        std::bitset<32> b(n);
        auto s = b.to_string();
        auto cnt = s.size();
        for (auto l = 0UL, r = cnt - 1; l < r; l++, r--){
            auto t = s[l];
            s[l] = s[r];
            s[r] = t;
        }
        return bitset<32>(s).to_ulong();
    }
};
