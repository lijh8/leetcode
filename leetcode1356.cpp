class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        sort(begin(arr), end(arr), [](unsigned a, unsigned b){
            return tuple{std::popcount(a), a} < 
                tuple{std::popcount(b), b};
        });
        return arr;
    }
};