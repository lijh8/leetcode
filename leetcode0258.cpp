class Solution {
public:
    int help(int num){
        const auto s = std::to_string(num);
        const auto n = s.size();
        if (n == 1){
            return num;
        }
        auto x = std::accumulate(begin(s), end(s), 0, [](const auto &sum, const auto &c){
            return sum + c - '0';
        });
        return x;
    }

    int addDigits(int num) {
        do {
            num = help(num);
        } while (std::to_string(num).size() > 1);
        return num;
    }
};
