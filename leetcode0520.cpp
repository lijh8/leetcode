class Solution {
public:
    bool detectCapitalUse(string word) {
        const auto n = word.size();
        if (n == 0){
            return false;
        }
        auto initial_upper = std::isupper(word[0]);
        auto rest_upper = count_if(cbegin(word) + 1, cend(word) + 1, [](const auto &a){
            return std::isupper(a);
        });
        return !initial_upper && rest_upper == 0 ||
            initial_upper && rest_upper == 0 ||
            initial_upper && rest_upper == n - 1;
    }
};
