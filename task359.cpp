/*
Given an array of integers nums, return the number of good pairs.

A pair (i, j) is called good if nums[i] == nums[j] and i < j.
*/

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        map<int, int> a;

        for (const int& i: nums) ++a[i];

        int result = 0;
        for (const auto& it: a) {
            result += ((it.second-1)*it.second)/2;
        }

        return result;
    }
};
