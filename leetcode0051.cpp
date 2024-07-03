class Solution {
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> solutions;
        vector<int> queensPos(n, -1);

        int row = 0, col = 0;
        while (row >= 0) {
            if (col == n) {
                if (row == 0) break;
                queensPos[row] = -1;
                row--;
                col = queensPos[row] + 1;
                continue;
            }

            bool isSafe = true;
            for (int i = 0; i < row; i++) {
                if (queensPos[i] == col || queensPos[i] == col - (row - i) || queensPos[i] == col + (row - i)) {
                    isSafe = false;
                    break;
                }
            }

            if (isSafe) {
                queensPos[row] = col;
                if (row == n - 1) {
                    vector<string> solution;
                    for (int i = 0; i < n; i++) {
                        string rowStr(n, '.');
                        rowStr[queensPos[i]] = 'Q';
                        solution.push_back(rowStr);
                    }
                    solutions.push_back(solution);
                    col++;
                } else {
                    row++;
                    col = 0;
                }
            } else {
                col++;
            }
        }

        return solutions;
    }
};
