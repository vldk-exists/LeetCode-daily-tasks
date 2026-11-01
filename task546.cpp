/*
You are given four integers row, cols, rCenter, and cCenter. There is a rows x cols matrix and you are on the cell with the coordinates (rCenter, cCenter).

Return the coordinates of all cells in the matrix, sorted by their distance from (rCenter, cCenter) from the smallest distance to the largest distance. You may return the answer in any order that satisfies this condition.

The distance between two cells (r1, c1) and (r2, c2) is |r1 - r2| + |c1 - c2|.
*/

class Solution {
public:
    vector<vector<int>> allCellsDistOrder(int rows, int cols, int rCenter, int cCenter) {
        vector<vector<int>> result;
        vector<vector<int>> m(rows, vector<int>(cols, 0));

        int maxDistance = 0;

        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                int distance = abs(i - rCenter) + abs(j - cCenter);

                if (maxDistance < distance) 
                    maxDistance = distance;

                m[i][j] = distance;
            }
        }

        vector<vector<int>> n[maxDistance+1];

        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                n[m[i][j]].push_back({i,j});
            }
        }

        for (int i = 0; i < maxDistance + 1; ++i) {
            for (const vector<int>& k: n[i]) {
                result.push_back(k);
            }
        }

        return result;
    }
};
