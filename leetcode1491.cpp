class Solution {
public:
    double average(vector<int>& salary) {
        auto [min, max] = minmax_element(begin(salary), end(salary));
        auto sum = accumulate(begin(salary), end(salary), 0);
        auto avg = (sum - *min - *max) / (salary.size() - 2.0);
        return avg;
    }
};
