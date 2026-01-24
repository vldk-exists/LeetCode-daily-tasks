/*
You are given an integer array nums.

You are allowed to delete any number of elements from nums without making it empty. After performing the deletions, select a subarray of nums such that:

    - All elements in the subarray are unique.
    - The sum of the elements in the subarray is maximized.

Return the maximum sum of such a subarray.
*/

class Solution {
public:
    int maxSum(vector<int>& nums) {
        int maxElement = *max_element(nums.begin(), nums.end());
        if (maxElement < 0) return maxElement;

        set<int> a;
        int sum = 0;

        for (const int& i: nums) {
            if (i >= 0 && a.find(i) == a.end()) {
                a.insert(i);
                sum += i;
            }
        }

        return sum;
    }
};
