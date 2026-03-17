/*
Given a binary array nums, return the maximum number of consecutive 1's in the array.
*/

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxLength = 0;
        int length = 0;
        for (const int& i: nums) {
            if (i == 0) {
                if (length > 0) {
                    maxLength = max(maxLength, length);
                    length = 0;
                }
            } else ++length;
        }

        if (length > 0) maxLength = max(maxLength, length);

        return maxLength;
    }
};
