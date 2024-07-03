class Solution {
public:
    bool checkRecord(string s) {
        const auto n = s.size();
        auto A = count(begin(s), end(s), 'A');
        auto triple_L = false;
        for (auto i = 1; n >= 3 && i != n - 1; i++){
            if (s[i - 1] == 'L' && s[i] == 'L' && s[i + 1] == 'L'){
                triple_L = true;
                break;
            }
        }
        return !(A >= 2 || triple_L);
    }
};
