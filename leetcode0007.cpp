class Solution {
public:
    int reverse(int x) {
        auto s = std::to_string(x);
        std::reverse(begin(s), end(s));
        int n = 0;
        try {
            n = std::stoi(s);
            if (x < 0) n = -n;
        } catch (const std::exception &){
        }
        return n;
    }
};
