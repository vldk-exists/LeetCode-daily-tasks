/*
Given an integer array nums of unique elements, return all possible subsets (the power set).

The solution set must not contain duplicate subsets. Return the solution in any order.
*/

class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> variant;

        for (int i = 0; i < pow(2, nums.size()); ++i) {
            int j = 0;

            int x = i;
            while (x > 0) {
                if ((x & 1) > 0) {
                    variant.push_back(nums[j]);
                }

                x >>= 1;
                ++j;
            }

            result.push_back(variant);
            variant.clear();
        }

        return result;
    }
};
