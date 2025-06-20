/*
Given an integer array nums sorted in non-decreasing order, remove the duplicates in-place such that each unique element appears only once. The relative order of the elements should be kept the same. Then return the number of unique elements in nums.

Consider the number of unique elements of nums to be k, to get accepted, you need to do the following things:

    Change the array nums such that the first k elements of nums contain the unique elements in the order they were present in nums initially. The remaining elements of nums are not important as well as the size of nums.
    Return k.
*/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> a, b;
        for (int i: nums) {
            if (find(a.begin(), a.end(), i) != a.end()) {
                b.push_back(i);
            } else {
                a.push_back(i);
            }
        }

        sort(a.begin(), a.end());

        vector<int> c;
        for (int i = 0; i < a.size(); i++) {
            c.push_back(a[i]);
        }

        for (int i = 0; i < b.size(); i++) {
            c.push_back(b[i]);
        }

        int k = a.size();

        for (int i = 0; i < c.size(); i++) {
            nums[i] = c[i];
        }

        return k;
    }
};
