/*
You are given a 0-indexed integer array nums.

Return the maximum value over all triplets of indices (i, j, k) such that i < j < k. If all such triplets have a negative value, return 0.

The value of a triplet of indices (i, j, k) is equal to (nums[i] - nums[j]) * nums[k].
*/

class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        long long int maxValue = 0;

        for (long long int i = 0; i < nums.size()-2; i++) {
            for (long long int j = i+1; j < nums.size()-1; j++) {
                for (long long int k = j+1; k < nums.size(); k++) {
                    long long int value = (long long int)(nums[i] - nums[j]) * nums[k];

                    if (value > maxValue) maxValue = value;
                }
            }
        }

        return maxValue;
    } 
};
