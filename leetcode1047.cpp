class Solution {
public:
    string removeDuplicates(string s) {
        for (int i = 0; s.size() > 1 && i != s.size() - 1; ){
            if (s[i] == s[i + 1]){
                s.erase(i, 2);

                // ``` a time limit fix
                // i = 0;          // no, time limit exceeded
                if (i > 0){ i--; } // ok
                // ```

            } else {
                i++;
            }
        }
        return s;
    }
};
