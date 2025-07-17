/*
You are given a 0-indexed integer array nums and an integer k. Your task is to perform the following operation exactly k times in order to maximize your score:

    1. Select an element m from nums.
    2. Remove the selected element m from the array.
    3. Add a new element with a value of m + 1 to the array.
    4. Increase your score by m.

Return the maximum score you can achieve after performing the operation exactly k times.
*/

class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        int score = 0;
        for (int i = 0; i < k; i++) {  
            sort(nums.begin(), nums.end());
            int m = nums.back();
            nums.pop_back();
            nums.push_back(m+1);
            score += m;
        }

        return score;
    }
};
