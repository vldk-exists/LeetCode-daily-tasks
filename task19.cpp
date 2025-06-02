/*
Given an integer array nums of positive integers, return the average value of all even integers that are divisible by 3.

Note that the average of n elements is the sum of the n elements divided by n and rounded down to the nearest integer.
*/

class Solution {
public:
    int averageValue(vector<int>& nums) {
        vector<int> a;
        for (int num: nums) {
            if (num % 2 == 0 && num % 3 == 0) {
                a.push_back(num);
            }
        }
        if (!a.empty()) {
            return accumulate(a.begin(), a.end(), 0)/a.size();
        }
        return 0;
    }  
};
