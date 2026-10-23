/*
Given an m x n matrix of distinct numbers, return all lucky numbers in the matrix in any order.

A lucky number is an element of the matrix such that it is the minimum element in its row and maximum in its column.
*/

class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& m) {
        vector<int> result;

        vector<int> minsRow;
        for (int i = 0; i < m.size(); ++i) {
            int minRow = INT_MAX;
            for (int j = 0; j < m[0].size(); ++j) {
                if (minRow > m[i][j])
                    minRow = m[i][j];
            }

            minsRow.push_back(minRow);
        }

        vector<int> maxsCol;
        for (int i = 0; i < m[0].size(); ++i) {
            int maxCol = 0;
            for (int j = 0; j < m.size(); ++j) {
                if (maxCol < m[j][i])
                    maxCol = m[j][i];
            }

            maxsCol.push_back(maxCol);
        }

        for (int i = 0; i < minsRow.size(); ++i) {
            for (int j = 0; j < maxsCol.size(); ++j) {
                if (minsRow[i] == maxsCol[j])
                    result.push_back(minsRow[i]);
            }
        }


        return result;
    }
};
