/*
An n x n matrix is valid if every row and every column contains all the integers from 1 to n (inclusive).

Given an n x n integer matrix matrix, return true if the matrix is valid. Otherwise, return false.
*/

class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        int n = matrix.size();

        vector<int> t;
        for (int i = 1; i <= n; i++) t.push_back(i);

        // rows
        for (int i = 0; i < n; i++) {
            vector<int> row = matrix[i];
            sort(row.begin(), row.end());
            if (t != row) return false;
        }

        // columns 
        for (int i = 0; i < n; i++) {
            vector<int> column;
            for (int j = 0; j < n; j++) column.push_back(matrix[j][i]);
            sort(column.begin(), column.end());
            if (t != column) return false;
        }

        return true;
    }
};
