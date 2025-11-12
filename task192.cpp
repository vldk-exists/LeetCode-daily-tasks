/*
Given an array arr of positive integers sorted in a strictly increasing order, and an integer k.

Return the kth positive integer that is missing from this array.
*/

class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int count = 0;
        int res = 0;


        int prev = 0, curr;
        for (int i = 0; i < arr.size(); i++) {
            curr = arr[i];
            for (int j = prev+1; j < curr; j++) {
                if (count == k) return res;
                res = j;
                count++;
            }
            prev = curr;
        }

        int d = arr[arr.size()-1];
        while (count < k) {
            res = ++d;
            count++;
        }

        return res;
    }
};
