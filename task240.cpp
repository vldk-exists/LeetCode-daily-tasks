/*
Given an array of positive integers arr, return the sum of all possible odd-length subarrays of arr.

A subarray is a contiguous subsequence of the array.
*/

class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int res = 0;

        for (int i = 0; i < arr.size(); i++) {
            int length = 0;
            int sum = 0;
            for (int j = i; j < arr.size(); j++, length++) {
                sum += arr[j];
                if (length % 2 == 0) res += sum;
            }
        }

        return res;
    }
};
