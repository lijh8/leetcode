class Solution {
public:
    int findLucky(vector<int>& arr) {
        std::map<int, size_t> m;
        for (const auto &i: arr){
            auto count = std::count(begin(arr), end(arr), i);
            if (i == count){
                m.emplace(i, count);
            }
        }
        auto max = max_element(begin(m), end(m),
            [](const auto &a, const auto &b){return a.second < b.second;});
        if (max != end(m)){
            return max->first;
        } else {
            return -1;
        }
    }
};
