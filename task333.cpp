/*
You are given a 1-indexed array of distinct integers nums of length n.

You need to distribute all the elements of nums between two arrays arr1 and arr2 using n operations. In the first operation, append nums[1] to arr1. In the second operation, append nums[2] to arr2. Afterwards, in the ith operation:

    - If the last element of arr1 is greater than the last element of arr2, append nums[i] to arr1. Otherwise, append nums[i] to arr2.

The array result is formed by concatenating the arrays arr1 and arr2. For example, if arr1 == [1,2,3] and arr2 == [4,5,6], then result = [1,2,3,4,5,6].

Return the array result.
*/

class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        vector<int> a = {nums[0]};
        vector<int> b = {nums[1]};

        for (int i = 2; i < nums.size(); ++i) {
            if (a.back() > b.back()) a.push_back(nums[i]);
            else b.push_back(nums[i]);
        }

        a.insert(a.end(), b.begin(), b.end());

        return a;
    }
};
