class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        const auto n = arr.size();
        for (const auto &i: arr){
            if (count(begin(arr), end(arr), i) > n / 4){
                return i;
            }
        }
        return -1;
    }
};
