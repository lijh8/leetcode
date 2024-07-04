class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        // sort(begin(letters), end(letters));
        auto p = equal_range(begin(letters), end(letters), target);
        if (p.second == end(letters)){
            return letters[0];
        }
        return *p.second;
    }
};
