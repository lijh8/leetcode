#include <algorithm>
#include <string>
#include <unordered_map>

size_t lengthOfLongestSubstring(const std::string &s) {
  long max = 0;
  for (auto i = begin(s), j = i; j < end(s); ++j) {
    if (auto k = std::find(i, j, *j); k != j) {
      i = k + 1;
    }
    max = std::max(max, j - i + 1);
  }
  return max;
}

size_t lengthOfLongestSubstring2(const std::string &s) {
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

size_t lengthOfLongestSubstring3(const std::string &s) {
  if (empty(s)) {
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

#include <iostream>
int main() {
  std::cout << lengthOfLongestSubstring("abcabcbb") << "\n"; // 3
  std::cout << lengthOfLongestSubstring("bbbbb") << "\n";    // 1
  std::cout << lengthOfLongestSubstring("pwwkew") << "\n";   // 3
  std::cout << lengthOfLongestSubstring("") << "\n";         // 0
  std::cout << lengthOfLongestSubstring(" ") << "\n";        // 1
  std::cout << lengthOfLongestSubstring("abc") << "\n";      // 3
  std::cout << lengthOfLongestSubstring("aab") << "\n";      // 2
  std::cout << lengthOfLongestSubstring("abba") << "\n";     // 2
  return 0;
}
