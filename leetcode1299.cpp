class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        auto i = begin(arr);
        for (; i != end(arr) - 1; ++i){
            *i = *(max_element(i + 1, end(arr)));
        }
        *i = -1;
        return arr;
    }
};
