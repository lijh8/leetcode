class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        stringstream ss(sentence);
        auto count = 0;
        for (std::string w; ss >> w; ){
            count++;
            if (auto pos = 0;
                (pos = w.find(searchWord)) != std::string::npos &&
                pos == 0)
            {
                return count;
            }
        }
        return -1;
    }
};
