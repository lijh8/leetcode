class Solution {
public:
    bool isValid(string word) {
        auto hasVowel = false;
        auto hasConsonant = false;

        if (word.size() < 3){
            return false;
        }
        for (const auto &c: word){
            if (!isalnum(c)){
                return false;
            }
            if (std::set{'@', '#', '$',}.contains(c)){
                return false;
            }
            if (isalpha(c)){
                if (std::set{'a', 'e', 'i', 'o', 'u',
                             'A', 'E', 'I', 'O', 'U',}.contains(c)){
                    hasVowel = true;
                } else {
                    hasConsonant = true;
                }
            }
        }
        return hasVowel && hasConsonant;
    }
};
