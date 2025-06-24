/*
Given two integer arrays nums1 and nums2, return an array of their intersection. Each element in the result must be unique and you may return the result in any order.
*/

class Solution {
public:
    vector<int> intersection(vector<int>& a, vector<int>& b) {
        vector<int> d;
        
        for (int i: a) {
            if (find(b.begin(), b.end(), i) != b.end() && find(d.begin(), d.end(), i) == d.end()) {
                d.push_back(i);
            }
        }

        return d;
    }
};
