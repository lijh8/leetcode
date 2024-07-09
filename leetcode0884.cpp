class Solution {
public:
    std::vector<std::pair<std::string, size_t>> helper(const std::string &s){
        std::stringstream ss(s);
        std::map<std::string, size_t> map;
        for (std::string word; ss >> word; ){
            map[std::move(word)]++;
        }
        return {begin(map), end(map)};
    }

    std::vector<std::string> uncommonFromSentences(std::string s1, std::string s2) {
        auto v1 = helper(s1);
        auto v2 = helper(s2);
        std::vector<std::pair<std::string, size_t>> v3;
        set_symmetric_difference(
            begin(v1), end(v1), begin(v2), end(v2), back_inserter(v3),
            [](const auto &a, const auto &b){return a.first < b.first;});
        erase_if(v3, [](const auto &e){return e.second > 1;});
        std::vector<std::string> v4;
        for (auto &e: v3){
            v4.emplace_back(std::move(e.first));
        }
        return v4;
    }
};
