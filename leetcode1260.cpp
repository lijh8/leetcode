class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        const auto m = grid.size();
        const auto n = grid[0].size();
        std::vector<int> v;
        for (auto &row: grid){
            for (auto &c: row){
                v.emplace_back(std::move(c));
            }
        }
        rotate(rbegin(v), rbegin(v) + k % (m * n), rend(v));
        for (auto i = 0; i != m; i++){
            move(cbegin(v) + i * n, cbegin(v) + (i + 1) * n, begin(grid[i]));
        }
        return grid;
    }
};
