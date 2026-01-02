/*
You are given an integer array nums with the following properties:

    - nums.length == 2 * n.
    - nums contains n + 1 unique elements.
    - Exactly one element of nums is repeated n times.

Return the element that is repeated n times.
*/

class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        set<int> a;

        for (const int& i: nums) {
            if (a.find(i) != a.end()) return i;
            else a.insert(i);
        }

        return nums[0];
    }
};
