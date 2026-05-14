/*
You are given an integer array nums. We consider an array good if it is a permutation of an array base[n].

base[n] = [1, 2, ..., n - 1, n, n] (in other words, it is an array of length n + 1 which contains 1 to n - 1 exactly once, plus two occurrences of n). For example, base[1] = [1, 1] and base[3] = [1, 2, 3, 3].

Return true if the given array is good, otherwise return false.

Note: A permutation of integers represents an arrangement of these numbers.
*/

class Solution {
public:
    bool isGood(vector<int>& nums) {
        const int n = nums.size();        
        if (n == 1) return false;
        sort(nums.begin(), nums.end());

        if (nums[n-1]+1 != n) return false;

        if (nums[n-1] != nums[n-2]) return false;

        for (int i = 0; i < n-2; ++i) {
            if (nums[i] == nums[i+1]) return false;
        }

        return true;
    }
};
