/*
Given two integer arrays startTime and endTime and given an integer queryTime.

The ith student started doing their homework at the time startTime[i] and finished it at time endTime[i].

Return the number of students doing their homework at time queryTime. More formally, return the number of students where queryTime lays in the interval [startTime[i], endTime[i]] inclusive.
*/

class Solution {
public:
    int busyStudent(vector<int>& a, vector<int>& b, int c) {
        const int n = a.size();
        int count = 0;

        for (int i = 0; i < n; ++i) {
            if (a[i] <= c && b[i] >= c) ++count;
        }

        return count;
    }
};
