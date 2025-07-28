/*
Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.

You must implement a solution with a linear runtime complexity and use only constant extra space.
*/

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> a;

        for (int num: nums) {
            if (a.find(num) != a.end()) {
                a.erase(num);
            } else {
                a[num] = 1;
            }
        }

        return a.begin()->first;
    }
};
