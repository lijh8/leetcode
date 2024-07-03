class Solution {
public:
    int subtractProductAndSum(int n) {
        std::string s = std::to_string(n);
        auto product = 1;
        auto sum = 0;
        for (const auto &e: s){
            product *= e - '0';
            sum += e - '0';
        }
        return product - sum;
    }
};
