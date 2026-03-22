/*
Given two n x n binary matrices mat and target, return true if it is possible to make mat equal to target by rotating mat in 90-degree increments, or false otherwise.
*/

class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        const int n = mat.size();

        for (int k = 0; k < 4; ++k) {
            vector<vector<int>> rotated(n, vector<int>(n));

            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    rotated[j][n - i - 1] = mat[i][j];
                }
            }

            if (rotated == target) return true;

            mat.swap(rotated);
        }

        return false;
    }
};
