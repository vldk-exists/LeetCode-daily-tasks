/*
Given an array nums of distinct integers, return all the possible permutations. You can return the answer in any order.
*/

class Solution {
public:
    vector<vector<int>> variants = {};
    int n = 0;

    void func(vector<int> nums, vector<int> variant) {
        for (int i = 0; i < nums.size(); ++i) {
            vector<int> next_nums = {};
            for (int j = 0; j < nums.size(); ++j) {
                if (i != j)
                    next_nums.push_back(nums[j]);
            }

            vector<int> new_variant = variant;
            new_variant.push_back(nums[i]);
            func(next_nums, new_variant);
        }

        if (variant.size() == n)
            variants.push_back(variant);
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> variant;

        n = nums.size();

        func(nums, variant);

        return variants;
    }
};

/*

class Solution(object):
    def __init__(self):
        self.variants = []
        self.n = 0

    def func(self, nums, variant=[]):
        for i in range(len(nums)):
            next_nums = [nums[j] for j in range(len(nums)) if i != j]
            self.func(next_nums, variant+[nums[i]])

        if len(variant) == self.n:
            self.variants.append(variant)

    
    def permute(self, nums):
        self.n = len(nums)
        self.func(list(nums))

        return self.variants

        

*/
