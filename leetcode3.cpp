#include <string>

int lengthOfLongestSubstring(std::string s) {
    auto n = s.size();
    if (n == 0) { return 0; }
    int begin = 0;
    int end = 0;
    for (int i = 0; i != n - 1; i++){
        for (int j = i + 1; j != n; j++){
            auto first = std::begin(s) + i;
            auto last = std::begin(s) + j;
            auto pos = find(first, last, s[j]);
            if (pos != last){
                i += pos - first;
                break;
            }
            if (j - i > end - begin){
                begin = i;
                end = j;
            }
        }
    }
    return end - begin + 1;
}

#include <iostream>
int main(){
    std::cout << __LINE__ << ": " << lengthOfLongestSubstring(  "abc") << "\n";
    std::cout << __LINE__ << ": " << lengthOfLongestSubstring("ababc") << "\n";
    std::cout << __LINE__ << ": " << lengthOfLongestSubstring("ababcab") << "\n";
    std::cout << __LINE__ << ": " << lengthOfLongestSubstring(  "abcab") << "\n";
    std::cout << __LINE__ << ": " << lengthOfLongestSubstring(  "abcabcbb") << "\n"; // abc
    std::cout << __LINE__ << ": " << lengthOfLongestSubstring("bbbbb") << "\n"; // b
    std::cout << __LINE__ << ": " << lengthOfLongestSubstring("pwwkew") << "\n"; // wke
    std::cout << __LINE__ << ": " << lengthOfLongestSubstring("a") << "\n"; // a
    std::cout << __LINE__ << ": " << lengthOfLongestSubstring(" ") << "\n";
    std::cout << __LINE__ << ": " << lengthOfLongestSubstring("") << "\n";
    std::cout << __LINE__ << ": " << lengthOfLongestSubstring(  "abcabcbbabcabcabcd") << "\n"; // abcd
    std::cout << __LINE__ << ": " << lengthOfLongestSubstring(  "aab") << "\n"; // ab
    std::cout << __LINE__ << ": " << lengthOfLongestSubstring(  "dcbaaabcdef") << "\n"; //
    std::cout << __LINE__ << ": " << lengthOfLongestSubstring(  "dcbaafedcba") << "\n"; //
    std::cout << __LINE__ << ": " << lengthOfLongestSubstring(  "dcbaaabcdef") << "\n"; // abcdef

    return 0;
}
