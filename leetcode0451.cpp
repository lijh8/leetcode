class Solution {
public:
    std::string frequencySort(std::string s) {
        std::map<int, int> m;
        for (const auto &e: s){
            m[e]++;
        }

        std::priority_queue<std::pair<int, int>> pq;
        for (const auto &e: m){
            pq.push({e.second, e.first});
        }

        std::string t;
        while (!pq.empty()) {
            auto e = pq.top();
            t += std::string(e.first, e.second);
            pq.pop();
        }
        return t;
    }
};
