/*
You are given an array nums consisting of n prime integers.

You need to construct an array ans of length n, such that, for each index i, the bitwise OR of ans[i] and ans[i] + 1 is equal to nums[i], i.e. ans[i] OR (ans[i] + 1) == nums[i].

Additionally, you must minimize each value of ans[i] in the resulting array.

If it is not possible to find such a value for ans[i] that satisfies the condition, then set ans[i] = -1.
*/

class Solution {
public:
    int f (const int& i) {
        for (int j = 1; j <= 1000; j++) {
            if ((j | (j+1)) == i) return j;
        }

        return -1;
    }

    vector<int> minBitwiseArray(vector<int>& nums) {
        vector<int> ans;

        for (const int& i: nums) {
            ans.push_back(f(i));
        }

        return ans;
    }
};
