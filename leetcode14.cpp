class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int m = strs[0].size();
        int n = strs.size();
        if (n == 0){return "";}
        bool mismatch = false;
        int i = 0;
        for ( ; i != m; i++){
            for (int j = 0; j != n; j++){
                if (strs[0][i] != strs[j][i]){
                    mismatch = true;
                    break;
                }
            }
            if (mismatch){
                break;
            }
        }
        return std::string(begin(strs[0]), begin(strs[0]) + i);
    }
};
