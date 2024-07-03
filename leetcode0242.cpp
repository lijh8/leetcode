class Solution {
public:
    std::string help(const std::string &s){
        auto s2 = s;
        sort(begin(s2), end(s2));
        auto last = unique(begin(s2), end(s2));
        s2.erase(last, end(s2));
        std::string s3;
        for (const auto &e: s2){
            s3 += std::to_string(count(begin(s), end(s), e)) + " " + e + " ";
        }
        return s3;
    }

    bool isAnagram(std::string s, std::string t) {
        return help(s) == help(t);
    }
};
