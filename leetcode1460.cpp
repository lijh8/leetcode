class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        ranges::sort(target);
        ranges::sort(arr);
        return target == arr;
    }
};
