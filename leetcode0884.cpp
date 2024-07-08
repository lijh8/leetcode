class Solution {
public:
    std::map<std::string, size_t> help(const std::string &s){
        std::stringstream ss(s);
        std::map<std::string, size_t> map;
        for (std::string word; ss >> word; ){
            map[word]++;
        }
        return map;
    }

    std::vector<std::string> uncommonFromSentences(std::string s1, std::string s2) {
        auto map1 = help(s1);
        auto map2 = help(s2);
        std::vector<std::pair<std::string, size_t>> v1 (begin(map1), end(map1));
        std::vector<std::pair<std::string, size_t>> v2 (begin(map2), end(map2));
        std::vector<std::pair<std::string, size_t>> v3;
        set_symmetric_difference(
            begin(v1), end(v1), begin(v2), end(v2), back_inserter(v3),
            [](const auto &a, const auto &b){return a.first < b.first;});
        erase_if(v3, [](const auto &e){return e.second > 1;});
        std::vector<std::string> v4;
        for (const auto &e: v3){
            v4.emplace_back(e.first);
        }
        return v4;
    }
};
