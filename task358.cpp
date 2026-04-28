/*
There is an m x n matrix that is initialized to all 0's. There is also a 2D array indices where each indices[i] = [ri, ci] represents a 0-indexed location to perform some increment operations on the matrix.

For each location indices[i], do both of the following:

    - Increment all the cells on row ri.
    - Increment all the cells on column ci.

Given m, n, and indices, return the number of odd-valued cells in the matrix after applying the increment to all locations in indices.
*/

class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {
        vector<int> a(m, 0), b(n, 0);

        for (vector<int>& index: indices) {
            ++a[index[0]];
            ++b[index[1]];
        }

        int count = 0;
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if ((a[i] + b[j]) % 2 != 0) ++count;
            }
        }

        return count;
    }
};
