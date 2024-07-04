class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        std::vector<int> res;
        for (auto num = left; num <= right; num++){
            auto dividable = true;
            for (const auto &digit: to_string(num)){
                if (digit == '0' || num % (digit - '0') != 0){
                    dividable = false;
                    break;
                }
            }
            if (dividable){
                res.push_back(num);
            }
        }
        return res;
    }
};
