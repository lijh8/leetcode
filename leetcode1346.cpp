class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        const auto n = arr.size();
        if (n < 2){
            return false;
        }
        for (auto i = 0; i != n - 1; i++){
            for (auto j = i + 1; j != n; j++){
                if (arr[i] * 2 == arr[j] ||
                    arr[j] * 2 == arr[i])
                {
                    return true;
                }
            }
        }
        return false;
    }
};
