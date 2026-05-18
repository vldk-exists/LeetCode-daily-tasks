/*
Given an array nums of n integers and an integer k, determine whether there exist two adjacent subarrays of length k such that both subarrays are strictly increasing. Specifically, check if there are two subarrays starting at indices a and b (a < b), where:

    - Both subarrays nums[a..a + k - 1] and nums[b..b + k - 1] are strictly increasing.
    - The subarrays must be adjacent, meaning b = a + k.

Return true if it is possible to find two such subarrays, and false otherwise.


*/

class Solution {
public:
    bool hasIncreasingSubarrays(vector<int>& nums, int k) {
        for (int i = 0; i < nums.size()-k*2+1; ++i) {
            bool a = true, b = true;

            for (int j = 0; j < k-1; ++j) {
                if (nums[i+j+k] >= nums[i+j+k+1]) {
                    a = false;
                }

                if (nums[i+j] >= nums[i+j+1]) {
                    b = false;
                }
            }

            if (a && b) return true;
        }

        return false;
    }
};
