/*
Given the array of integers nums, you will choose two different indices i and j of that array. Return the maximum value of (nums[i]-1)*(nums[j]-1). 
*/

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int a = nums[nums.size()-1];
        int b = nums[nums.size()-2];

        return (a-1)*(b-1);
    }
};
