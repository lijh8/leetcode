class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        const int rows = matrix.size();
        const int cols = matrix[0].size();

        for (int d = 0; d < rows + cols - 1; d++) {
            std::vector<int> v;
            for (auto i = max(d - cols + 1, 0); i <= min(d, rows - 1); i++) {
                auto j = d - i;
                j = cols - 1 - j;
                v.push_back(matrix[i][j]);
            }
            if (!all_of(begin(v), end(v), [&](const auto &e){
                return e == v[0];
            })){
                return false;
            }
        }
        return true;
    }
};
