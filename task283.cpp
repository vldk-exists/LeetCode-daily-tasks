/*
Given two integer arrays nums1 and nums2, return an array of their intersection. Each element in the result must appear as many times as it shows in both arrays and you may return the result in any order.
*/

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        map<int, int> a;
        for (const int& i: nums1) a[i]++;

        vector<int> result;
        for (const int& i: nums2) {
            if (a.find(i) != a.end()) {
                if (a[i] > 0) {
                    result.push_back(i);
                    a[i]--;
                } else a.erase(i);
            }
        }

        return result;
    }
};
