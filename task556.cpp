/*
You are given an integer array nums and an integer k.

In one operation, you can choose any index i where 0 <= i < nums.length and change nums[i] to nums[i] + x where x is an integer from the range [-k, k]. You can apply this operation at most once for each index i.

The score of nums is the difference between the maximum and minimum elements in nums.

Return the minimum score of nums after applying the mentioned operation at most once for each index in it.
*/

class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        int mx = 0;
        for (int i = 0; i < nums.size(); ++i) {
            if (mx < nums[i])
                mx = nums[i];
        }

        int mn = INT_MAX;
        for (int i = 0; i < nums.size(); ++i) {
            if (mn > nums[i])
                mn = nums[i];
        }

        // for (int i = -k; i <= k; ++i) {
        //     int a = mx + i;
        //     for (int j = -k; j <= k; ++j) {
        //         int b = mn + j;

        //         int c = a - b;
        //         if (c < 0) c *= -1;

        //         if (diff > c)
        //             diff = c;
        //     }
        // }

        int diff = (mx-k) - (mn+k);
        if (diff < 0) return 0;

        return diff;
    }
};
