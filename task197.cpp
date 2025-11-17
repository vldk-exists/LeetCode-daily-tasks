/*
Given an binary array nums and an integer k, return true if all 1's are at least k places away from each other, otherwise return false.
*/

class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        if (k == 0) return true;
        vector<int> a;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i]) a.push_back(i);
        }

        for (int i = 0; i < a.size(); i++) {
            for (int j = i+1; j < a.size(); j++) {
                if ((a[j]-a[i]-1) < k) return false;
            }
        }

        return true;
    }
};
