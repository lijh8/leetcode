class Solution {
public:
    int findComplement(int num) {
        if (num == 0){
            return 1;
        }
        std::string s = std::bitset<32>(num).to_string();
        auto last = s.find_first_not_of("0");
        if (last != std::string::npos){
            s.erase(0, last);
        }

        for (auto &c: s) {
            if (c == '0') {
                c = '1';
            } else if (c == '1') {
                c = '0';
            }
        }

        return std::stoull(s, 0, 2);
    }
};
