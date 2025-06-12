/*
A square matrix is said to be an X-Matrix if both of the following conditions hold:

    All the elements in the diagonals of the matrix are non-zero.
    All other elements are 0.

Given a 2D integer array grid of size n x n representing a square matrix, return true if grid is an X-Matrix. Otherwise, return false.
*/

class Solution {
public:
    bool checkXMatrix(vector<vector<int>>& g) {
        int n = g.size();
        vector<vector<int>> m;
        for (int i = 0; i < n; i++) {
            m.push_back({});
            for (int j = 0; j < n; j++) {
                m[i].push_back(0);
            }
            cout << endl;
        }

        int k = 0, j = n - 1;
        for (vector<int>& i: m) {
            i[k] = 1;
            i[j] = 1;
            k++;
            j--;
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (g[i][j]) g[i][j] = 1;
                else g[i][j] = 0;
            }
        }

        return (g == m);
    }
};
