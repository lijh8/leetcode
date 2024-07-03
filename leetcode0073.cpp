class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        auto copy = matrix;
        auto m = matrix.size();
        auto n = matrix[0].size();
        for (auto i = 0; i != m; i++){
            for (auto j = 0; j != n; j++){
                if (matrix[i][j] == 0){
                    for (int k = 0; k != m; ++k) {
                        copy[k][j] = 0;
                    }
                    for (int k = 0; k != n; ++k) {
                        copy[i][k] = 0;
                    }
                }
            }
        }
        matrix = copy;
    }
};
