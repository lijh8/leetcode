class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        if (deck.size() < 2){
            return false;
        }
        std::map<int /*card*/, size_t /*count*/> m;
        for (const auto &x: deck){
            m[x]++;
        }
        std::vector v(begin(m), end(m));
        const auto n = v.size();
        for (auto i = 0; i != n - 1; i++){
            for (auto j = i + 1; j != n; j++){
                if (std::gcd(v[i].second, v[j].second) == 1){
                    return false;
                }
            }
        }
        return true;
    }
};
