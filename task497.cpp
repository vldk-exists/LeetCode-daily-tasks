/*
Given an integer rowIndex, return the rowIndexth (0-indexed) row of the Pascal's triangle.
*/

class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> triangle = {{1}};

        int n = 2;

        for (int i = 1; i <= rowIndex; ++i) {
            vector<int> row;

            for (int j = 0; j < n; ++j) {
                int a_i = j-1;
                int b_i = j;

                int a = 0;
                int b = 0;

                if (a_i >= 0 && a_i < n-1) {
                    a = triangle[i-1][a_i];
                }

                if (b_i >= 0 && b_i < n-1) {
                    b = triangle[i-1][b_i];
                }	

                row.push_back(a+b);
            }

            triangle.push_back(row);

            ++n;
        }

        return triangle[rowIndex];
    }
};
