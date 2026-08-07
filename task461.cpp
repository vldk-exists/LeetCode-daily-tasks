/*
You are given row x col grid representing a map where grid[i][j] = 1 represents land and grid[i][j] = 0 represents water.

Grid cells are connected horizontally/vertically (not diagonally). The grid is completely surrounded by water, and there is exactly one island (i.e., one or more connected land cells).

The island doesn't have "lakes", meaning the water inside isn't connected to the water around the island. One cell is a square with side length 1. The grid is rectangular, width and height don't exceed 100. Determine the perimeter of the island.
*/

class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        const int& n = grid.size();
        const int& m = grid[0].size();

        int perimeter = 0;

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if (grid[i][j]) {
                    int a = 4;

                    if (i-1 >= 0) {
                        if (grid[i-1][j])
                            --a;
                    }

                    if (i+1 < n) {
                        if (grid[i+1][j])
                            --a;
                    }

                    if (j-1 >= 0) {
                        if (grid[i][j-1])
                            --a;
                    }

                    if (j+1 < m) {
                        if (grid[i][j+1])
                            --a;
                    }

                    perimeter += a;
                }
            }
        }

        return perimeter;
    }
};
