class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        std::vector<int> v;
        sort(begin(nums1), end(nums1));
        sort(begin(nums2), end(nums2));
        set_intersection(begin(nums1), end(nums1), begin(nums2), end(nums2), back_inserter(v));
        return v;
    }
};
