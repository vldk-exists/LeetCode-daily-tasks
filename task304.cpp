/*
Given an m x n binary matrix mat, return the number of special positions in mat.

A position (i, j) is called special if mat[i][j] == 1 and all other elements in row i and column j are 0 (rows and columns are 0-indexed).
*/

class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        const int n = mat.size();
        const int m = mat[0].size();
        
        int result = 0;

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if (mat[i][j] == 1) {
                    int ones1 = 1;
                    for (int k = 0; k < m; ++k) {
                        if (k != j) {
                            if (mat[i][k] == 1) ones1++; 
                        }
                    }

                    int ones2 = 1;
                    for (int l = 0; l < n; ++l) {
                        if (l != i) {
                            if (mat[l][j] == 1) ones2++; 
                        }
                    }

                    if (ones1 == 1 && ones2 == 1) result++;
                }
            }
        }

        return result;
    }
};
