/*
Given two arrays of unique digits nums1 and nums2, return the smallest number that contains at least one digit from each array. 
*/

class Solution {
public:
    int minNumber(vector<int>& nums1, vector<int>& nums2) {
        vector<bool> a(9, false);

        char b = 10;
        for (const char& i: nums1) {
            if (i < b) b = i;
            a[i] = true;
        }

        char c = 100;
        char d = 10;

        for (const char& i: nums2) {
            if (a[i]) {
                if (i < c) c = i;
            }
            if (i < d) d = i;
        }

        int e = 10 * b + d;
        int f = 10 * d + b;

        return min((int)c, min(e, f));
    }
};
