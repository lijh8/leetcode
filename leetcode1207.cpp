class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        std::map<int, int> m;
        for (const auto &i: arr){
            m[i]++;
        }
        std::set<int> set;
        for (const auto &i: m){
            set.emplace(i.second);
        }
        return m.size() == set.size();
    }
};
