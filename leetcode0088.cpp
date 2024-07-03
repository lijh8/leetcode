class Solution {
public:
    void merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n) {
        auto nums3 = vector(begin(nums1), begin(nums1)+m);
        nums1.clear();

        std::merge(begin(nums3), end(nums3), begin(nums2), end(nums2), std::back_inserter(nums1));
    }
};
