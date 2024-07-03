class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        const auto n = matrix.size();
        for (auto i = 1; i != n; i++){
            matrix[0].insert(end(matrix[0]), begin(matrix[i]), end(matrix[i]));
        }
        sort(begin(matrix[0]), end(matrix[0]));
        return matrix[0][k - 1];
    }
};
