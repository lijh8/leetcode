class Solution {
public:
    int maximum69Number(int num) {
        auto s = to_string(num);
        auto i = std::string::npos;
        if ((i = s.find_first_of("6")) != std::string::npos){
            s[i] = '9';
        }
        return stoi(s);
    }
};
