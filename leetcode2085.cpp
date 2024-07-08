class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        std::vector<std::string> v;
        std::map<std::string, size_t> map1;
        std::map<std::string, size_t> map2;
        for (const auto &e: words1){ map1[e]++; }
        for (const auto &e: words2){ map2[e]++; }
        std::vector<std::pair<std::string, size_t>> v1(begin(map1), end(map1));
        std::vector<std::pair<std::string, size_t>> v2(begin(map2), end(map2));
        erase_if(v1, [](const auto &e){ return e.second > 1; });
        erase_if(v2, [](const auto &e){ return e.second > 1; });
        std::vector<std::pair<std::string, size_t>> v3;
        set_intersection(begin(v1), end(v1), begin(v2), end(v2),
            back_inserter(v3), [](const auto &a, const auto &b){
                return a.first < b.first && a.second == 1 && b.second == 1;
            });
        std::vector<std::string> v4;
        for (const auto &e: v3){
            v4.emplace_back(e.first);
        }
        return v4.size();
    }
};
