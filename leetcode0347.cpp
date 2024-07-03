class Solution {
public:
    std::vector<int> topKFrequent(std::vector<int>& nums, int k) {
        std::map<int, int> m;
        for (const auto &e: nums){
            m[e]++;
        }

        std::priority_queue<std::pair<int, int>> pq;
        for (const auto &e: m){
            pq.push({e.second, e.first});
        }

        std::vector<int> res;
        for (int i = 0; i < k; i++){
            res.push_back(pq.top().second);
            pq.pop();
        }

        return res;
    }
};
