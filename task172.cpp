/*
You are given two integer arrays nums1 and nums2 of sizes n and m, respectively. Calculate the following values:

    answer1 : the number of indices i such that nums1[i] exists in nums2.
    answer2 : the number of indices i such that nums2[i] exists in nums1.

Return [answer1,answer2].
*/

class Solution {
public:
    bool search(const vector<int>& nums, const int& n) {
        for (const int& i: nums) {
            if (i == n) return true;
        }
        return false;
    }

    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        int answer1 = 0, answer2 = 0;

        for (const int& i: nums1) {
            if (search(nums2, i)) answer1++;
        }

        for (const int& i: nums2) {
            if (search(nums1, i)) answer2++;
        }

        return {answer1, answer2};
    }
};
