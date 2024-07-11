class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        for (auto &word: words){
            sort(begin(word), end(word));
        }
        std::string s1 = words[0];
        const auto n = words.size();
        for (auto i = 1; i != n; i++){
            std::string s2;
            set_intersection(cbegin(words[i]), cend(words[i]),
                            cbegin(s1), cend(s1),
                            back_inserter(s2));
            s1 = s2;
        }
        std::vector<string> v(s1.size());
        transform(cbegin(s1), cend(s1), begin(v), [](const auto &c){
            return std::string(1, c);
        });
        return v;
    }
};
