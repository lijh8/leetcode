class Solution {
public:
    int nextGreaterElement(int n) {
        auto s = to_string(n);
        auto b = next_permutation(begin(s), end(s));
        if (b){
            try {
                return stoi(s);
            } catch(const std::exception &e){
                // return -1;
            }
        }
        return -1;
    }
};
