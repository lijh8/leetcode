class Solution {
public:
    bool isPalindrome2(int x) {
        auto s = std::to_string(x);
        auto n = s.size();
        for (std::string::size_type l = 0, r = n - 1; l < r; l++, r--){
            if (s[l] != s[r]){
                return false;
            }
        }
        return true;
    }

    bool isPalindrome(int x) {
        // first two iterators of equal shoud be on the same sequence
        // error:
        // return equal(cbegin(std::to_string(x)), cbegin(std::to_string(x)) + s.size() / 2, crbegin(std::to_string(x)));

        const auto s = std::to_string(x);
        const auto n = s.size();
        return equal(cbegin(s), cbegin(s) + n / 2, crbegin(s));
    }
};
