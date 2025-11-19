/*
You are given an array of integers nums. You are also given an integer original which is the first number that needs to be searched for in nums.

You then do the following steps:

    - If original is found in nums, multiply it by two (i.e., set original = 2 * original).
    - Otherwise, stop the process.
    - Repeat this process with the new number as long as you keep finding the number.

Return the final value of original.
*/

class Solution {
public:
    int findNumber(vector<int>& nums, int x) {
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == x) {
                return i;
            }
        }
        return -1;
    }

    int findFinalValue(vector<int>& nums, int original) {
        while (true) {
            int i = findNumber(nums, original);
            if (i < 0) break;
            original *= 2;
        }

        return original;
    }
};
