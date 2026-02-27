/*
You are given a 0-indexed array nums of integers.

A triplet of indices (i, j, k) is a mountain if:

    - i < j < k
    - nums[i] < nums[j] and nums[k] < nums[j]

Return the minimum possible sum of a mountain triplet of nums. If no such triplet exists, return -1.
*/

class Solution {
public:
    int minimumSum(vector<int>& nums) {
        if (nums.size() < 3) return -1;

        bool isMountain = false;
        int minVal = INT_MAX;
        for (int i = 0; i < nums.size()-2; i++) {
            for (int j = i+1; j < nums.size()-1; j++) {
                for (int k = j+1; k < nums.size(); k++) {
                    if (nums[i] < nums[j] && nums[k] < nums[j]) {
                        isMountain = true;
                        minVal = min(minVal, nums[i] + nums[j] + nums[k]);
                    }
                }
            }
        }

        if (isMountain) return minVal;
        return -1;
    }
};
