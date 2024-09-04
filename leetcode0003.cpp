#include <string>

  size_t lengthOfLongestSubstring(std::string s) {
    if (size(s) == 0) {
      return 0;
    }
    auto first = begin(s);
    auto last = begin(s);
    for (auto i = begin(s); i != end(s) - 1; i++) {
      for (auto j = i + 1; j != end(s); j++) {
        auto k = find(i, j, *j);
        if (k != j) {
          i = k;
          break;
        }
        if (j - i > last - first) {
          first = i;
          last = j;
        }
      }
    }
    return last - first + 1;
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
