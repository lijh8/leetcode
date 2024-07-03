class Solution {
public:
    int strStr(string haystack, string needle) {
        auto it = std::search(haystack.begin(), haystack.end(),
            needle.begin(), needle.end(),
            [](char a, char b) { return a == b; });
        if (it == end(haystack)) {
            return -1;
        }
        return it - begin(haystack);
    }
};
