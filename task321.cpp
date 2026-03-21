/*
You are given an m x n integer matrix grid, and three integers x, y, and k.

The integers x and y represent the row and column indices of the top-left corner of a square submatrix and the integer k represents the size (side length) of the square submatrix.

Your task is to flip the submatrix by reversing the order of its rows vertically.

Return the updated matrix.
*/

class Solution {
public:
    vector<vector<int>> reverseSubmatrix(vector<vector<int>>& grid, int y, int x, int k) {
        int a = 1;
        int i = y;
        int j = y+k-1;
        while (a <= k) {
            if (i >= j) {
                ++x;
                i = y;
                j = y+k-1;
                ++a;
            } else {
                swap(grid[i][x], grid[j][x]);
                ++i;
                --j;
            }
        }
        return grid;
    }
};
