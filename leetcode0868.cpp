class Solution {
public:
    int binaryGap(int n) {
        auto s = bitset<32>(n).to_string();
        s.erase(0, s.find_first_not_of('0'));
        const auto m = s.size();
        std::vector<int> v;
        for (auto i = 0; i != m; i++){
            if (s[i] == '1'){
                v.emplace_back(i);
            }
        }
        if (v.size() < 2) {
            return 0;
        }
        adjacent_difference(begin(v), end(v), begin(v));
        return *max_element(begin(v) + 1, end(v));
    }

};
