/*
Given an array of integers arr, return true if and only if it is a valid mountain array.

Recall that arr is a mountain array if and only if:

    - arr.length >= 3
    - There exists some i with 0 < i < arr.length - 1 such that:
        -- arr[0] < arr[1] < ... < arr[i - 1] < arr[i] 
        -- arr[i] > arr[i + 1] > ... > arr[arr.length - 1]
*/

class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        if (arr.size() == 1) return false;
        int previousElement = arr[0];
        int isIncreasing = true;

        if (previousElement > arr[1]) return false;

        for (int i = 1; i < arr.size(); i++) {
            if (isIncreasing) {
                if (previousElement > arr[i]) {
                    isIncreasing = false;
                } else if (previousElement == arr[i]) return false;
            } else {
                if (previousElement <= arr[i]) return false;
            }
            previousElement = arr[i];
        }

        if (isIncreasing == true) return false;

        return true;
    }
};
