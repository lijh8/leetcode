class Solution {
public:
    int maximumSwap(int num) {
        auto s = std::to_string(num);
        auto t = s;
        sort(begin(t), end(t), std::greater());
        auto p = mismatch(begin(s), end(s), begin(t));
        auto it = find(rbegin(s), rend(s), *p.second);
        std::swap(*p.first, *next(it).base());
        return stoi(s);
    }
};
