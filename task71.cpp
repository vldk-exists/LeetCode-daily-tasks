/*
Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's.

You must do it in place.
*/

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();

        vector<int> a;
        vector<vector<int>> b(matrix);

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (matrix[i][j] == 0) {
                    a.push_back(j);
                    b[i] = vector<int>(n, 0);
                }
            }
        }

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (find(a.begin(), a.end(), j) != a.end()) {
                    b[i][j] = 0;
                }
            }
        }

        matrix = b;
    }
};
