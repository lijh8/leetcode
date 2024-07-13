class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        auto num = 0;
        for (auto &row: grid){
            auto n = count_if(begin(row), end(row), [](auto &x){return x < 0;});
            num += n;
        }
        return num;
    }
};
