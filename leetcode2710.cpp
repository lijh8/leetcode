class Solution {
public:
    string removeTrailingZeros(string num) {
        while (*crbegin(num) == '0'){
            num.erase(next(crbegin(num)).base());
        }
        return num;
    }
};
