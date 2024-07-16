class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        std::vector<std::string> v;
        for (auto i = begin(words); i != end(words); i++){
            for (auto j = begin(words); j != end(words); j++){
                if (i != j && (*i).contains(*j)){
                    v.emplace_back(*j);
                }
            }
        }
        sort(begin(v), end(v));
        auto last = unique(begin(v), end(v));
        v.erase(last, end(v));
        return v;
    }
};
