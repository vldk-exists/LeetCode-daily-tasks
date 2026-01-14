/*
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.
*/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        const int n = nums.size();
        
        map<int, int> a;

        for (int i = 0; i < n; i++) {
            a[nums[i]] = i;
        }

        for (int i = 0; i < n; i++) {
            const int& x = nums[i];
            if (a.find(target-x) != a.end()) {
                const int& j = a[target-x];
                if (i != j) return {i, j};
            }  
        }
        
        return {};
    }
};
