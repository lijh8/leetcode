class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(begin(arr), end(arr));
        adjacent_difference(cbegin(arr), cend(arr), begin(arr));
        auto equal = all_of(cbegin(arr) + 1, cend(arr), [&](const auto &i){
            return arr[1] == i;
        });
        return equal;
    }
};
