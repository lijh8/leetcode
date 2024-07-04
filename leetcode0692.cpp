class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        std::map<std::string, int> m;
        for (const auto &e: words){
            m[e]++;
        }

        auto cmp = [](std::pair<int, std::string> a, std::pair<int, std::string> b){
            if (a.first < b.first){
                return true;
            } else if (a.first == b.first && a.second > b.second){
                return true;
            } else {
                return false;
            }
        };

        std::priority_queue<
            std::pair<int, std::string>,
            std::vector<std::pair<int, std::string>>, // underlying container
            decltype(cmp)> pq(cmp);
        for (const auto &e: m){
            pq.push({e.second, e.first});
        }
        std::vector<std::string> v;
        while (!pq.empty() && k--){
            auto e = pq.top();
            v.push_back(e.second);
            pq.pop();
        }
        return v;
    }
};
