class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        std::map< std::multiset< char > , std::vector< std::string > > m;
        std::vector< std::vector< std::string > > v;
        for (const auto &w: strs){
            std::multiset<char> s;
            for (const auto &c: w){
                s.insert(c);
            }
            m[s].push_back(w);
        }
        for (const auto &e: m){
            v.push_back(e.second);
        }
        return v;
    }
};
