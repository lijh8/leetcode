class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> v(numRows);
        for (auto i = 0; i != numRows; i++) {
            v[i].resize(i + 1);
            v[i][0] = v[i][i] = 1;
            for (auto j = 1; j < i; j++) {
                v[i][j] = v[i - 1][j] + v[i - 1][j - 1];
            }
        }
        return v;
    }
};
