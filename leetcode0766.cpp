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

    // top left to bottom right

    void printDiagonals1(const vector<vector<int>>& arr) {
        const int rows = arr.size();
        const int cols = arr[0].size();

        for (int d = 0; d < rows + cols - 1; d++) {
            for (int i = max(0, d - cols + 1); i <= min(rows - 1, d); i++) {
                int j = d - i;
                cout << arr[i][j] << ", ";
            }
            cout << endl;
        }
    }

    // reverse: top right to bottom left

    void printDiagonals2(const vector<vector<int>>& arr) {
        const int rows = arr.size();
        const int cols = arr[0].size();

        for (int d = 0; d < rows + cols - 1; d++) {
            for (int i = max(0, d - cols + 1); i <= min(rows - 1, d); i++) {
                int j = d - i;
                j = cols - 1 - j;
                cout << arr[i][j] << ", ";
            }
            cout << endl;
        }
    }

    //-------

    // leetcode 766, Toeplitz matrix,
    // https://leetcode.cn/problems/toeplitz-matrix/

    bool checkDiagonals1(vector<vector<int>>& matrix) {
        int m = matrix.size(), n = matrix[0].size();
        for (int i = 1; i < m; i++) {
            for (int j = 1; j < n; j++) {
                if (matrix[i][j] != matrix[i - 1][j - 1]) {
                    return false;
                }
            }
        }
        return true;
    }

    // back diagonal line
    bool checkDiagonals2(vector<vector<int>>& matrix) {
        int m = matrix.size(), n = matrix[0].size();
        for (int i = 1; i < m; i++) {
            for (int j = n - 2; j >= 0; j--) {
                if (matrix[i][j] != matrix[i - 1][j + 1]) {
                    return false;
                }
            }
        }
        return true;
    }

};
