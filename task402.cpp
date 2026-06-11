/*
Given a 2D grid of size m x n and an integer k. You need to shift the grid k times.

In one shift operation:

    - Element at grid[i][j] moves to grid[i][j + 1].
    - Element at grid[i][n - 1] moves to grid[i + 1][0].
    - Element at grid[m - 1][n - 1] moves to grid[0][0].

Return the 2D grid after applying shift operation k times.
*/

class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        const int m = grid.size();
        const int n = grid[0].size();

        for (; k > 0; --k) {
            int a = grid[m-1].back();
            grid[m-1].pop_back();

            for (int i = 0; i < m; ++i) {
                grid[i].insert(grid[i].begin(), a);
                if (grid[i].size() == n) break;
                a = grid[i].back();
                grid[i].pop_back();
            }
        }

        return grid;
    }
};
