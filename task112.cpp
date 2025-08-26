/*
You are given a 2D matrix grid of size m x n. You need to check if each cell grid[i][j] is:

    - Equal to the cell below it, i.e. grid[i][j] == grid[i + 1][j] (if it exists).
    - Different from the cell to its right, i.e. grid[i][j] != grid[i][j + 1] (if it exists).

Return true if all the cells satisfy these conditions, otherwise, return false.
*/

class Solution {
public:
    bool satisfiesConditions(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();

        int a = -1;

        for (int i = 0; i < n; i++) {
            if (grid[0][i] != a) a = grid[0][i];
            else return false;
            for (int j = 0; j < m; j++) {
                if (grid[j][i] != a) return false;
            }
        }

        return true;
    }
};
