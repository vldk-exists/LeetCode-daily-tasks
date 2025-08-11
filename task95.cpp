/*
Given an integer array nums, return the third distinct maximum number in this array. If the third maximum does not exist, return the maximum number.
*/

class Solution {
public:
    static void delDupes(vector<int>* a) {
        int i = 0;
        int j = 1;

        while (j < a->size()) {
            if (a->at(i) == a->at(j)) {
                a->erase(a->begin()+j);
            } else {
                i++;
                j++;
            }
        }
    }

    int thirdMax(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        delDupes(&nums);

        if (nums.size() >= 3) {
            return nums[nums.size()-3];
        } return nums[nums.size()-1];
    }
};
