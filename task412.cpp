/*
Given the array nums, obtain a subsequence of the array whose sum of elements is strictly greater than the sum of the non included elements in such subsequence. 

If there are multiple solutions, return the subsequence with minimum size and if there still exist multiple solutions, return the subsequence with the maximum total sum of all its elements. A subsequence of an array can be obtained by erasing some (possibly zero) elements from the array. 

Note that the solution with the given constraints is guaranteed to be unique. Also return the answer sorted in non-increasing order.
*/

class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        const int n = nums.size();
        
        sort(nums.begin(), nums.end());

        int s1 = 0;
        for (const int& i: nums) s1 += i;

        int s2 = 0;
        vector<int> result;
        for (int i = 0; i < n; ++i) {
            s1 -= nums.back();
            s2 += nums.back();
            result.push_back(nums.back());
            nums.pop_back();

            if (s2 > s1) break;
        }

        sort(result.begin(), result.end(), std::greater<int>());

        return result;
    }
};
