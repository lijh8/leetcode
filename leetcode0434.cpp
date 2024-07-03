class Solution {
public:
    int countSegments(string s) {
        std::stringstream ss(s);
        std::string word;
        auto n = 0;
        while (ss >> word){
            n++;
        }
        return n;
    }
};
