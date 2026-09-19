/*
You are given two integer arrays of equal length target and arr. In one step, you can select any non-empty subarray of arr and reverse it. You are allowed to make any number of steps.

Return true if you can make arr equal to target or false otherwise.
*/

class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        int a[1000];

        for (const int& i: target) {
            ++a[i-1];
        }

        for (const int& i: arr) {
            if (a[i-1] == 0) 
                return false;
            
            --a[i-1];
        }

        return true;
    }
};
