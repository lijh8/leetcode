class Solution {
public:
    int findNumbers(vector<int>& nums) {
        auto count = 0;
        for (const auto &i: nums){
            int n = log10(std::abs(i)) + 1;
            if (n % 2 == 0){
                count++;
            }
        }
        return count;
    }
};
