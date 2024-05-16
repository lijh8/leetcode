class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        nums1.insert(end(nums1), begin(nums2), end(nums2));
        sort(begin(nums1), end(nums1));
        size_t n = size(nums1); //c++17
        if (n % 2)
        {
            return nums1[n / 2];
        }
        else
        {
            return (nums1[n / 2 - 1] + nums1[n / 2]) / 2.0;
        }
    }
};
