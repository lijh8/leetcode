class Solution {
public:

    // leetcode 819: Most Common Word
    // https://leetcode.cn/problems/most-common-word/solutions/1424731/zui-chang-jian-de-dan-ci-by-leetcode-sol-mzjb/comments/1510279

    std::string mostCommonWord(std::string paragraph, std::vector<std::string>& banned) {
        transform(cbegin(paragraph), cend(paragraph), begin(paragraph),
            [](auto &c) {return isalpha(c) ? tolower(c) : ' ';});
        std::stringstream para(paragraph);
        std::unordered_set ban(banned.cbegin(), banned.cend());
        std::unordered_map<std::string, size_t> freq;
        for (std::string word; para >> word; ban.count(word) ? 0 : freq[word]++);
        std::priority_queue<std::pair<size_t, std::string>> pq;
        for (const auto &p: freq){pq.emplace(p.second, p.first);}
        return pq.top().second;
    }

};
