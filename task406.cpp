/*
You are given an n x n integer matrix grid.

Generate an integer matrix maxLocal of size (n - 2) x (n - 2) such that:

    - maxLocal[i][j] is equal to the largest value of the 3 x 3 matrix in grid centered around row i + 1 and column j + 1.

In other words, we want to find the largest value in every contiguous 3 x 3 matrix in grid.

Return the generated matrix.
*/

class Solution {
public:
    int getMaxEl(int i, int j, vector<vector<int>>& grid) {
        int maxEl = 0;

        for (int a = 0; a < 3; ++a) {
            for (int b = 0; b < 3; ++b) {
                if (grid[i+a][j+b] > maxEl) 
                    maxEl = grid[i+a][j+b];
            }
        }

        return maxEl;
    }

    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        const int n = grid.size();

        vector<vector<int>> result;

        for (int i = 0; i < n-2; ++i) {
            result.push_back({});
            for (int j = 0; j < n-2; ++j) {
                int maxEl = getMaxEl(i, j, grid);
                result[i].push_back(maxEl);
            }
        }

        return result;
    }
};
