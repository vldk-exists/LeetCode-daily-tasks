/*
Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.
*/

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
            set<int>uniques;
            for(int i=0; i<nums.size(); i++) {
                if(uniques.find(nums[i]) != uniques.end()) {
                    return true;
                }
                else
                uniques.insert(nums[i]);
            }
            return false;
    }
};
