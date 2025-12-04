/*
You are given an array of integers nums. Return the length of the longest subarray of nums which is either strictly increasing or strictly decreasing.
*/

class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        const int n = nums.size();

        int maxLength = 0;

        for (int i = 0; i < n; i++) {
            int length = 1, prev = nums[i];
            bool isEnc = true;
            for (int j = i+1; j < n; j++) {
                if (prev == nums[j]) break;
                if (j == i+1) {
                    if (prev > nums[j]) isEnc = false;
                } else {
                    if (isEnc) {
                        if (prev > nums[j]) break;
                    } else {
                        if (prev < nums[j]) break;
                    }
                }
                prev = nums[j];
                length++;
            }

            maxLength = max(maxLength, length);
        }

        return maxLength;
    }
};
