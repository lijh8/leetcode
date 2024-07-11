class Solution {
public:
    string defangIPaddr(string address) {
        std::vector<std::string> v;
        for (const auto &c: address){
            v.emplace_back(string(1, c));
        }
        replace(begin(v), end(v), string("."), string("[.]"));
        stringstream ss;
        for (const auto &e: v){
            ss << e;
        }
        return ss.str();
    }
};
