class Solution {
public:
    vector<int> lexicalOrder(int n) {
        std::vector<int> v(n);
        iota(begin(v), end(v), 1);
        sort(begin(v), end(v), [](const auto &a, const auto &b){
            return std::to_string(a) < std::to_string(b);
        });
        return v;
    }
};
