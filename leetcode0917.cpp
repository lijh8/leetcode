class Solution {
public:
    string reverseOnlyLetters(string s) {
        const auto n = s.size();
        for (int i = 0, j = n - 1; i < j; ){
            if (isalpha(s[i]) && isalpha(s[j])){
                swap(s[i++], s[j--]);
            } else if (!isalpha(s[i])){
                i++;
            } else if (!isalpha(s[j])){
                j--;
            }
        }
        return s;
    }
};
