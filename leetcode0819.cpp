class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        for (auto &c: paragraph){
            c = isalpha(c) ? tolower(c) : ' ';
        }
        stringstream ss(paragraph);
        std::vector<std::string> words;
        for (std::string w; ss >> w; ){
            words.push_back(w);
        }
        for (const auto &e: banned){
            words.erase(remove(begin(words), end(words), e), end(words));
        }
        auto max = 0L;
        std::string res;
        for (const auto &e: words){
            auto count = std::count(cbegin(words), cend(words), e);
            if (count > max){
                max = std::max(max, count);
                res = e;
            }
        }
        return res;
    }
};
