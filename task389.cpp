/*
You are given an n x n grid where you have placed some 1 x 1 x 1 cubes. Each value v = grid[i][j] represents a tower of v cubes placed on top of cell (i, j).

After placing these cubes, you have decided to glue any directly adjacent cubes to each other, forming several irregular 3D shapes.

Return the total surface area of the resulting shapes.

Note: The bottom face of each shape counts toward its surface area.
*/

class Solution {
public:
    int surfaceArea(vector<vector<int>>& grid) {
        const int n = grid.size();
        int s = 0;

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                if (grid[i][j] > 0) {
                    int a = grid[i][j] * 4 + 2;
                    if (i - 1 >= 0 && grid[i - 1][j]) { // up
                        a -= min(grid[i][j], grid[i-1][j]);
                    }

                    if (i + 1 < n && grid[i + 1][j]) { // down
                        a -= min(grid[i][j], grid[i+1][j]);
                    }

                    if (j - 1 >= 0 && grid[i][j - 1]) { // left
                        a -= min(grid[i][j], grid[i][j-1]);
                    }

                    if (j + 1 < n && grid[i][j + 1]) { // right
                        a -= min(grid[i][j], grid[i][j+1]);
                    }

                    s += a;
                }
            }
        }

        return s;
    }
};
