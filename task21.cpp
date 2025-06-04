/*
In MATLAB, there is a handy function called reshape which can reshape an m x n matrix into a new one with a different size r x c keeping its original data.

You are given an m x n matrix mat and two integers r and c representing the number of rows and the number of columns of the wanted reshaped matrix.

The reshaped matrix should be filled with all the elements of the original matrix in the same row-traversing order as they were.

If the reshape operation with given parameters is possible and legal, output the new reshaped matrix; Otherwise, output the original matrix.
*/

class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m = mat.size(), n = mat.at(0).size();
        if (m*n != r*c) return mat;

        vector<int> a;

        for (vector<int> i: mat) {
            for (int j: i) {
                a.push_back(j);
            }
        }

        vector<vector<int>> b;

        for (int i = 0; i < r; i++) {
            b.push_back({});
        }

        vector<int> a_copy(a);
        reverse(a_copy.begin(), a_copy.end());

        try {
            for (int i = 0; i < r; ++i) {
                for (int j = 0; j < c; ++j) {
                    b[i].push_back(a_copy.back());
                    a_copy.pop_back();
                }
            }
        } catch (const out_of_range& e) {
            return mat;
        }

        return b;
    }
};
