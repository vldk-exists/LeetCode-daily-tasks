/*
You are given an integer array nums that represents a circular array. Your task is to create a new array result of the same size, following these rules:
For each index i (where 0 <= i < nums.length), perform the following independent actions:

    - If nums[i] > 0: Start at index i and move nums[i] steps to the right in the circular array. Set result[i] to the value of the index where you land.
    - If nums[i] < 0: Start at index i and move abs(nums[i]) steps to the left in the circular array. Set result[i] to the value of the index where you land.
    - If nums[i] == 0: Set result[i] to nums[i].

Return the new array result.

Note: Since nums is circular, moving past the last element wraps around to the beginning, and moving before the first element wraps back to the end.
*/

class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
        const int n = nums.size();

        vector<int> result(n);
        
        for (int i = 0; i < n; i++) {
            int a = abs(nums[i]), j = i;
            if (nums[i] > 0) {
                for (; a > 0; a--) {
                    if (j == n-1) j = 0;
                    else j++;
                }
            } else if (nums[i] < 0) {
                for (; a > 0; a--) {
                    if (j == 0) j = n-1;
                    else j--;
                }
            }
            result[i] = nums[j];
        }

        return result;
    }
};
