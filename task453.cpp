/*
Given an integer array nums of length n where all the integers of nums are in the range [1, n] and each integer appears at most twice, return an array of all the integers that appears twice.

You must write an algorithm that runs in O(n) time and uses only constant auxiliary space, excluding the space needed to store the output
*/

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        // vector<bool> a(100000, false);
        // vector<int> result;

        // for (const int& i: nums) {
        //     if (a[i-1] == false) 
        //         a[i-1] = true;
        //     else 
        //         result.push_back(i);
        // }

        // return result;

        vector<int> result;

        for (int i = 0; i < nums.size(); ++i) {
            const int a = abs(nums[i]);
            const int b = a-1;
            if (nums[b] < 0)
                result.push_back(a);
            else
                nums[b] = -nums[b];
        }

        return result;
    }
};
