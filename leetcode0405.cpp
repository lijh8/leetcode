class Solution {
public:
    std::string toHex(int num) {
        std::stringstream ss;
        std::ios_base::fmtflags oldFlags = ss.flags();
        ss << std::hex << num;
        ss.flags(oldFlags);

        //ss.str(""); // clear the content
        //ss.clear(); // clear the state
        return ss.str();
    }
};
