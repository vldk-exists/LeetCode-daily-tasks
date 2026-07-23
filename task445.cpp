class Solution {
public:
    vector<vector<int>> variants = {};

    void func(vector<int> nums, vector<int> variant) {
        if (nums.size() == 0) {
            variants.push_back(variant);
        }

        for (int i = 0; i < nums.size(); ++i) {
            vector<int> next_nums = {};
            for (int j = 0; j < nums.size(); ++j) {
                if (i != j)
                    next_nums.push_back(nums[j]);
            }

            variant.push_back(nums[i]);
            func(next_nums, variant);
            variant.pop_back();
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> variant;

        func(nums, variant);

        return variants;
    }
};

/*

class Solution(object):
    def __init__(self):
        self.variants = []

    def func(self, nums, variant=[]):
        if len(nums) == 0:
            self.variants.append(variant)
            return
    
        for i in range(len(nums)):
            next_nums = [nums[j] for j in range(len(nums)) if i != j]
            self.func(next_nums, variant+[nums[i]])

    def permute(self, nums):
        self.func(list(nums))

        return self.variants

*/
