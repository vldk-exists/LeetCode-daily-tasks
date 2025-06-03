/*
Given an integer array nums (0-indexed) and two integers target and start, find an index i such that nums[i] == target and abs(i - start) is minimized. Note that abs(x) is the absolute value of x.

Return abs(i - start).

It is guaranteed that target exists in nums.
*/

class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        vector<int> a;
        for (int i = 0; i < nums.size(); i++) {
            if (nums.at(i) == target) {
                a.push_back(abs(i-start));
            }
        }
        return *min_element(a.begin(), a.end());
    }
};
