/*
Given an array of integers nums and an integer k, an element nums[i] is considered good if it is strictly greater than the elements at indices i - k and i + k (if those indices exist). If neither of these indices exists, nums[i] is still considered good.

Return the sum of all the good elements in the array.
*/

class Solution {
public:
    int sumOfGoodNumbers(vector<int>& nums, int k) {
        map<int, int> a;

        for (int i = 0; i < nums.size(); ++i) {
            a[i] = nums[i];
        }

        int s = 0;

        for (int i = 0; i < nums.size(); ++i) {
            int b = -1;
            int c = -1;

            if (a.find(i-k) != a.end()) b = nums[i-k];
            if (a.find(i+k) != a.end()) c = nums[i+k];

            if (nums[i] > b && nums[i] > c) s += nums[i];
        }

        return s;
    }
};
