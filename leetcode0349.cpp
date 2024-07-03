class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(begin(nums1), end(nums1));
        sort(begin(nums2), end(nums2));
        auto last = unique(begin(nums1), end(nums1));
        nums1.erase(last, end(nums1));
        last = unique(begin(nums2), end(nums2));
        nums2.erase(last, end(nums2));
        std::vector<int> v;
        std::set_intersection(begin(nums1), end(nums1), begin(nums2), end(nums2), back_inserter(v));
        return v;
    }
};
