class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for (const auto &vector: matrix){
            auto last = find_if(begin(vector), end(vector), [&target](const auto x){
                return x == target;
            });
            if (last != end(vector)){
                return true;
            }
        }
        return false;
    }
};
