/*
Given two 0-indexed integer arrays nums1 and nums2, return a list answer of size 2 where:

    answer[0] is a list of all distinct integers in nums1 which are not present in nums2.
    answer[1] is a list of all distinct integers in nums2 which are not present in nums1.

Note that the integers in the lists may be returned in any order.
*/

class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& a, vector<int>& b) {
        set<int> x(a.begin(), a.end()), y(b.begin(), b.end());
        auto f = [] (set<int> i, set<int>& j) {
            vector<int> d;
            set_difference(i.begin(), i.end(), j.begin(), j.end(), inserter(d, d.begin()));
            return d;
        };
        vector<vector<int>> r = {f(x, y), f(y, x)};
        return r;
    }
};
