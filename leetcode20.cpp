class Solution {
public:
    bool isValid(string s) {
        auto n = s.size();
        std::stack<char> s2;

        for (std::string::size_type i = 0; i < n; i++){
            if (s2.empty()){
                s2.push(s[i]);
            } else if (s2.top() == '(' && s[i] == ')' ||
                       s2.top() == '{' && s[i] == '}' ||
                       s2.top() == '[' && s[i] == ']')
            {
                s2.pop();
            } else {
                s2.push(s[i]);
            }
        }

        return s2.empty();
    }
};
