/*
Given an integer array nums of size n, return the number with the value closest to 0 in nums. If there are multiple answers, return the number with the largest value.
*/

class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int closestNum = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            int currNum = nums[i];

            int currDistance = abs(currNum);
            int closestDistance = abs(closestNum);

            if (currDistance < closestDistance) {
                closestNum = currNum;
            }
            else if (currDistance == closestDistance) {
                closestNum = max(currNum, closestNum);
            }
        }

        return closestNum;
    }
};
