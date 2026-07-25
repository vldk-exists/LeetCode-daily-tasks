/*
Given an array of distinct integers candidates and a target integer target, return a list of all unique combinations of candidates where the chosen numbers sum to target. You may return the combinations in any order.

The same number may be chosen from candidates an unlimited number of times. Two combinations are unique if the frequency of at least one of the chosen numbers is different.

The test cases are generated such that the number of unique combinations that sum up to target is less than 150 combinations for the given input.
*/

class Solution {
public:
    void func(vector<int>& nums, vector<int>& variant, int& sum, const int& target, int startIndex, vector<vector<int>>& result) {        
        if (sum >= target) {
            if (sum == target) 
                result.push_back(variant);
            return;
        }
        
        for (int i = startIndex; i < nums.size(); ++i) {
            variant.push_back(nums[i]);
            sum += nums[i];

            func(nums, variant, sum, target, startIndex, result);
            
            ++startIndex;

            variant.pop_back();
            sum -= nums[i];
        }
    }

    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>> result = {};
        vector<int> variant = {};
        int sum = 0;
        int startIndex = 0;

        sort(nums.begin(), nums.end());

        func(nums, variant, sum, target, startIndex, result);

        return result; 
    }
};
