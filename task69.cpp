/*
Given two sorted arrays nums1 and nums2 of size m and n respectively, return the median of the two sorted arrays.

The overall run time complexity should be O(log (m+n)).
*/

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        for (int i = 0; i < nums2.size(); i++) {
            nums1.push_back(nums2[i]);
        }

        sort(nums1.begin(), nums1.end());

        size_t len = nums1.size();

        if (len % 2 == 0) {
            int j = len / 2;
            int i = j - 1;

            return (nums1[i]+nums1[j]) / 2.0;
        } else {
            int i = len / 2;

            return nums1[i];
        }
    }
};
