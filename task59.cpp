/*
Given a square matrix mat, return the sum of the matrix diagonals.

Only include the sum of all the elements on the primary diagonal and all the elements on the secondary diagonal that are not part of the primary diagonal.
*/

class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int i = 0, j = mat.size() - 1, s = 0;

        for (int k = 0; k < mat.size(); k++) {
            if (i != j) s += mat[k][i] + mat[k][j];
            else s += mat[k][i];
            i++;
            j--;
        }

        return s;
    }
};
