class Solution {
public:

    // leetcode 819: Most Common Word
    // https://leetcode.cn/problems/most-common-word/solutions/1424731/zui-chang-jian-de-dan-ci-by-leetcode-sol-mzjb/comments/1510279

    string mostCommonWord(string paragraph, vector<string>& banned) {
        transform(paragraph.cbegin(), paragraph.cend(), paragraph.begin(),
            [](auto& i) { return isalpha(i) ? tolower(i) : ' '; });
        stringstream ss(paragraph);
        unordered_set ban(banned.cbegin(), banned.cend());
        unordered_map<string, size_t> dict;

        for (string tmp; ss >> tmp; ban.count(tmp) ? 0 : dict[tmp]++);
        return max_element(dict.cbegin(), dict.cend(), [](auto& a, auto& b) {return a.second < b.second; })->first;
    }

};
