class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        auto n = matrix.size();
        for (auto i = 0UL; i != n - 1; ++i) {
            for (auto j = i + 1; j != n; ++j) {
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        for (auto &row: matrix) {
            reverse(row.begin(), row.end());
        }
    }
};
