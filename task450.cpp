/*
You are given an n x n 2D matrix representing an image, rotate the image by 90 degrees (clockwise).

You have to rotate the image in-place, which means you have to modify the input 2D matrix directly. DO NOT allocate another 2D matrix and do the rotation.
*/

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        const int n = matrix.size();

        int a = 0;
        int b = 1;

        for (int i = 0; i < n / 2; ++i) {
            for (int j = a; j < n-b; ++j) {
                int a1 = j;
                int a2 = n-1-i;

                int b1 = a2;
                int b2 = n-1-a1;

                int c1 = b2;
                int c2 = n-1-b1;

                int buffer = matrix[i][j];
                matrix[i][j] = matrix[c1][c2];

                matrix[c1][c2] = matrix[b1][b2];

                matrix[b1][b2] = matrix[a1][a2];

                matrix[a1][a2] = buffer;
            }

            ++a;
            ++b;
        }
    }
};
