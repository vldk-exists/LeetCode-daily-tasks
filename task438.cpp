/*
You are given an integer array nums.

Choose three elements a, b, and c from nums at distinct indices such that the value of the expression a + b - c is maximized.

Return an integer denoting the maximum possible value of this expression.
*/

class Solution {
public:
    int maximizeExpressionOfThree(vector<int>& nums) {
        int a = -101;
        int a_i = -1;

        int b = -101;
        int b_i = -1;

        int c = 101;

        for (int i = 0; i < nums.size(); ++i) {
            if (c > nums[i]) c = nums[i];
            if (a < nums[i]) {
                b = a;
                b_i = a_i;
                a = nums[i];
                a_i = i;
            }
            if (nums[i] > b && nums[i] <= a && a_i != i) {
                b = nums[i];
                b_i = i;
            }
                
        }

        return a + b - c;
    }
};
