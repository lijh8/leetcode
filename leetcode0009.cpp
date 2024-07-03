class Solution {
public:
    bool isPalindrome(int x) {
        auto s = std::to_string(x);
        auto n = s.size();
        for (std::string::size_type l = 0, r = n - 1; l < r; l++, r--){
            if (s[l] != s[r]){
                return false;
            }
        }
        return true;
    }
};
