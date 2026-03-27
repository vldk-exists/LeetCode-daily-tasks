/*
You are given an m x n integer matrix mat and an integer k. The matrix rows are 0-indexed.

The following proccess happens k times:

    - Even-indexed rows (0, 2, 4, ...) are cyclically shifted to the left.

	"image: https://assets.leetcode.com/uploads/2024/05/19/lshift.jpg"

    - Odd-indexed rows (1, 3, 5, ...) are cyclically shifted to the right.
    	
    	"image: https://assets.leetcode.com/uploads/2024/05/19/rshift-stlone.jpg"

Return true if the final modified matrix after k steps is identical to the original matrix, and false otherwise.
*/

class Solution {
public:
    bool areSimilar(vector<vector<int>>& mat, int k) {
        const int m = mat.size();
        const int n = mat[0].size();


        for (int i = 0; i < m; ++i) {
            for (int j = 1; j < n; ++j) {
                if (mat[i][j] != mat[i][(j+k)%n]) return false;
            }
        }

        return true;
    }
};
