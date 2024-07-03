class Solution {
public:
    string validIPAddress(string queryIP) {
        std::regex regex_v4(R"(^((\d|[1-9]\d|1\d\d|2[0-4]\d|25[0-5])\.){3}(\d|[1-9]\d|1\d\d|2[0-4]\d|25[0-5])$)");
        std::regex regex_v6(R"(^([0-9a-fA-F]{1,4}:){7}[0-9a-fA-F]{1,4}$)");

        if (std::regex_match(queryIP, regex_v4)) {
            return "IPv4";
        } else if (std::regex_match(queryIP, regex_v6)) {
            return "IPv6";
        } else {
            return "Neither";
        }
    }
};
