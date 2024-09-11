#include <string>

class Solution {
public:
  /*
  https://leetcode.cn/problems/longest-substring-without-repeating-characters/solutions/227999/wu-zhong-fu-zi-fu-de-zui-chang-zi-chuan-by-leetc-2/comments/2347374
  */

  size_t lengthOfLongestSubstring(const std::string &s) {
    std::unordered_map<char, std::string::const_iterator> map;
    long max = 0;
    for (auto i = begin(s), j = i; j != end(s); ++j) {
      if (auto k = map.find(*j); k != end(map) && k->second >= i) {
        i = k->second + 1;
      }
      map[*j] = j;
      max = std::max(max, j - i + 1);
    }
    return max;
  }

  size_t lengthOfLongestSubstring2(const std::string &s) {
    if (size(s) == 0) {
      return 0;
    }
    auto first = begin(s), last = first;
    for (auto i = begin(s); i != end(s) - 1; ++i) {
      for (auto j = i + 1; j != end(s); ++j) {
        if (auto k = find(i, j, *j); k != j) {
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
};

#include <iostream>
int main() {
  std::cout << __LINE__ << ": " << lengthOfLongestSubstring("abc") << "\n";
  std::cout << __LINE__ << ": " << lengthOfLongestSubstring("ababc") << "\n";
  std::cout << __LINE__ << ": " << lengthOfLongestSubstring("ababcab") << "\n";
  std::cout << __LINE__ << ": " << lengthOfLongestSubstring("abcab") << "\n";
  std::cout << __LINE__ << ": " << lengthOfLongestSubstring("abcabcbb")
            << "\n"; // abc
  std::cout << __LINE__ << ": " << lengthOfLongestSubstring("bbbbb")
            << "\n"; // b
  std::cout << __LINE__ << ": " << lengthOfLongestSubstring("pwwkew")
            << "\n";                                                      // wke
  std::cout << __LINE__ << ": " << lengthOfLongestSubstring("a") << "\n"; // a
  std::cout << __LINE__ << ": " << lengthOfLongestSubstring(" ") << "\n";
  std::cout << __LINE__ << ": " << lengthOfLongestSubstring("") << "\n";
  std::cout << __LINE__ << ": "
            << lengthOfLongestSubstring("abcabcbbabcabcabcd") << "\n"; // abcd
  std::cout << __LINE__ << ": " << lengthOfLongestSubstring("aab")
            << "\n"; // ab
  std::cout << __LINE__ << ": " << lengthOfLongestSubstring("dcbaaabcdef")
            << "\n"; //
  std::cout << __LINE__ << ": " << lengthOfLongestSubstring("dcbaafedcba")
            << "\n"; //
  std::cout << __LINE__ << ": " << lengthOfLongestSubstring("dcbaaabcdef")
            << "\n"; // abcdef

  return 0;
}
