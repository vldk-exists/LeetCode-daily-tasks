/*
You are given a 0-indexed integer array nums of size n.

Define two arrays leftSum and rightSum where:

    - leftSum[i] is the sum of elements to the left of the index i in the array nums. If there is no such element, leftSum[i] = 0.
    - rightSum[i] is the sum of elements to the right of the index i in the array nums. If there is no such element, rightSum[i] = 0.

Return an integer array answer of size n where answer[i] = |leftSum[i] - rightSum[i]|.
*/

class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        const int n = nums.size();
        vector<int> result;

        int rSum = 0;
        int lSum = 0;
        
        for (int i = 0; i < n; ++i) {
            int l = 0;

            if (i-1 >= 0) l = nums[i-1];

            lSum += l;

            result.push_back(lSum);
        }

        for (int i = n-1, j = 0; i >= 0; --i, ++j) {
            int r = 0;

            if (i+1 <= n-1) r = nums[i+1];

            rSum += r;

            result[i] = abs(result[i]-rSum);
        }

        return result;
    }
};
