class Solution {
public:
    char findTheDifference(string s, string t) {
        sort(begin(s), end(s));
        sort(begin(t), end(t));
        auto it = mismatch(begin(t), end(t), begin(s));
        if (it.first != end(t)){
            return *it.first;
        }
        return ' ';
    }
};
