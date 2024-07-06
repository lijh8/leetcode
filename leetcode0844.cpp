class Solution {
public:
    bool backspaceCompare(string s, string t) {
        auto f = [](const std::string &s){
            std::string res;
            for (const auto &e: s){
                if (e != '#'){
                    res.push_back(e);
                } else if (!res.empty()){
                    res.pop_back();
                }
            }
            return res;
        };
        return f(s) == f(t);
    }
};
