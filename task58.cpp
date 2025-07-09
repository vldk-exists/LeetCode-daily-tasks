/*
You are given an integer array nums where the largest integer is unique.

Determine whether the largest element in the array is at least twice as much as every other number in the array. If it is, return the index of the largest element, or return -1 otherwise.
*/

class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        auto it = max_element(nums.begin(), nums.end());
        int m = *it;
        int n = distance(nums.begin(), it);

        sort(nums.begin(), nums.end());
        nums.pop_back();

        for (int i: nums) {
            if (i > 0) {
                if ((int)(m / i) <= 1) return -1;
            }
        }

        return n;
    }
};
