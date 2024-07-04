class Solution {
public:
    bool hasAlternatingBits(int n) {
        auto s = bitset<32>(n).to_string();
        s.erase(begin(s), begin(s) + s.find_first_not_of('0'));
        const auto cnt = s.size();
        std::vector<int> v(cnt, 0);
        adjacent_difference(begin(s), end(s), begin(v));
        auto x = count_if(begin(v) + 1, end(v), [](const auto &e){
            return std::abs(e) != 1;
        });
        return !x;
    }
};
