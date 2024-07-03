class Solution {
public:
    bool isPalindrome(string s) {
        auto it = remove_if(begin(s), end(s), [](const auto x){
            return !isalnum(x);
        });
        s.erase(it, end(s));
        for (auto &x : s){
            x = tolower(x);
        }
        for (auto l = begin(s), r = end(s) - 1; l < r; l++, r--){
            if (*l != *r){
                return false;
            }
        }
        return true;
    }
};
