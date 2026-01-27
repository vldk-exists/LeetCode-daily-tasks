/*
You are given a 0-indexed array of integers nums.

A prefix nums[0..i] is sequential if, for all 1 <= j <= i, nums[j] = nums[j - 1] + 1. In particular, the prefix consisting only of nums[0] is sequential.

Return the smallest integer x missing from nums such that x is greater than or equal to the sum of the longest sequential prefix.
*/

bool binarySearch(vector<int> &nums, int n) {
    int low = 0;
    int high = nums.size() - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (nums[mid] == n)
            return true;

        if (nums[mid] < n)
            low = mid + 1;

        else
            high = mid - 1;
    }

    return false;
}

class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int prefixSum = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] != nums[i-1]+1) {
                break;
            }
            prefixSum += nums[i];
        }

        sort(nums.begin(), nums.end());

        while (true) {
            if (binarySearch(nums, prefixSum)) prefixSum++;
            else break;
        }

        return prefixSum;
    }
};
