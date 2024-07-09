class Solution {
public:
    std::vector<std::pair<std::string, size_t>> helper(vector<string>& v) {
        std::map<std::string, size_t> map;
        for (auto &e: v){ map[std::move(e)]++; }
        std::vector<std::pair<std::string, size_t>> t(begin(map), end(map));
        erase_if(t, [](const auto &e){ return e.second > 1; });
        return t;
    }

    int countWords(vector<string>& words1, vector<string>& words2) {
        auto v1 = helper(words1);
        auto v2 = helper(words2);
        std::vector<std::pair<std::string, size_t>> v3;
        set_intersection(begin(v1), end(v1), begin(v2), end(v2),
            back_inserter(v3), [](const auto &a, const auto &b){
                return a.first < b.first && a.second == 1 && b.second == 1;
            });
        std::vector<std::string> v4;
        for (const auto &e: v3){
            v4.emplace_back(std::move(e.first));
        }
        return v4.size();
    }
};
