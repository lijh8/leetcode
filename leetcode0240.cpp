class Solution {
public:
    bool searchMatrix(std::vector<std::vector<int>>& matrix, int target) {
        // range for 不用引用会超时
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
