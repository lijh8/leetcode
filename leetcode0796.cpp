class Solution {
public:
    bool rotateString(std::string s, std::string goal) {
        std::string left{""};
        std::string right{""};
        for (auto it = begin(s); it != end(s); ++it){
            left += *it;
            right = std::string(it+1, end(s));
            if (right + left == goal){
                return true;
            }
        }
        return false;
    }
};
