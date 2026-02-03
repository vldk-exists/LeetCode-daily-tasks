/*
You are given an integer array nums of length n.

An array is trionic if there exist indices 0 < p < q < n − 1 such that:

    - nums[0...p] is strictly increasing,
    - nums[p...q] is strictly decreasing,
    - nums[q...n − 1] is strictly increasing.

Return true if nums is trionic, otherwise return false.
*/

class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        const int n = nums.size();

        int a = 0;

        for (int i = 0; i < n-1; i++) {
            if (nums[i] > nums[i+1]) {
                if (a == 0 || a == 3) return false;
                if (a == 1) a++;
            } else if (nums[i] < nums[i+1]){
                if (a == 0 || a == 2) a++;
            } else return false;
        }

        return a == 3;
    }
};
