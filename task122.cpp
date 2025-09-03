/*
Given a 0-indexed m x n integer matrix matrix, create a new 0-indexed matrix called answer. Make answer equal to matrix, then replace each element with the value -1 with the maximum element in its respective column.

Return the matrix answer.
*/

class Solution {
public:
    vector<vector<int>> modifiedMatrix(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        
        for (int i = 0; i < n; i++) {
            vector<int> indexes;
            int maxElement = -1;
            for (int j = 0; j < m; j++) {
                if (matrix[j][i] >= 0) {
                    maxElement = max(matrix[j][i], maxElement);
                } else indexes.push_back(j);
            }

            for (int index: indexes) {
                matrix[index][i] = maxElement;
            }
        }

        return matrix;
    }
};
