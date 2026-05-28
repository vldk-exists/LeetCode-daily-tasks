/*
You are given a 0-indexed integer array nums. A subarray s of length m is called alternating if:

    - m is greater than 1.
    - s1 = s0 + 1.
    - The 0-indexed subarray s looks like [s0, s1, s0, s1,...,s(m-1) % 2]. In other words, s1 - s0 = 1, s2 - s1 = -1, s3 - s2 = 1, s4 - s3 = -1, and so on up to s[m - 1] - s[m - 2] = (-1)m.

Return the maximum length of all alternating subarrays present in nums or -1 if no such subarray exists.
*/

class Solution {
public:
    int alternatingSubarray(vector<int>& nums) {
        int l = 1; 
        int maxL = 1;
        int a = 1;

        for (int i = 1; i < nums.size(); ++i) {
            for (int j = i; j < nums.size(); ++j) {
                if (nums[j] - nums[j-1] == a) {
                    a = -a;
                    ++l;
                    if (l > maxL) maxL = l;
                } else {
                    a = 1;
                    l = 1;
                }
            }
            a = 1;
            l = 1;
        }

        if (maxL <= 1) return -1;
        return maxL;
    }
};
