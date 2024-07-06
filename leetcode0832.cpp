class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        for (auto &row: image){
            reverse(begin(row), end(row));
            for_each(begin(row), end(row), [](auto &x){ x = !x; });
        }
        return image;
    }
};
