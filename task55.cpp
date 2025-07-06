/*
Given a m x n binary matrix mat, find the 0-indexed position of the row that contains the maximum count of ones, and the number of ones in that row.

In case there are multiple rows that have the maximum count of ones, the row with the smallest row number should be selected.

Return an array containing the index of the row, and the number of ones in it.
*/

class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        vector<int> a;
        for (vector<int> row: mat) a.push_back(accumulate(row.begin(), row.end(), 0));
        vector<int>::iterator max = max_element(a.begin(), a.end());
        int index = distance(a.begin(), max);
        int count = *max;
        return {index, count};
    }
};
