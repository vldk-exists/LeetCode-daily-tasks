/*
You are given an integer array nums and an integer k.

An integer x is almost missing from nums if x appears in exactly one subarray of size k within nums.

Return the largest almost missing integer from nums. If no such integer exists, return -1.
A subarray is a contiguous sequence of elements within an array. 
*/

class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        const int n = nums.size();
        
        map<int, int> freqMap;

        for (int i = 0; i < n - k + 1; i++) {
            set<int> numSet;
            for (int j = i; j < i + k; j++) {
                numSet.insert(nums[j]);
            }
            for (const auto& k: numSet) {
                freqMap[k]++;
            }
        }

        int res = -1;

        for (const auto& i: freqMap) {
            if (i.second == 1) res = max(i.first, res);
        }

        return res;
    }
};
