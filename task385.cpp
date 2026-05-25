/*
There are n teams numbered from 0 to n - 1 in a tournament.

Given a 0-indexed 2D boolean matrix grid of size n * n. For all i, j that 0 <= i, j <= n - 1 and i != j team i is stronger than team j if grid[i][j] == 1, otherwise, team j is stronger than team i.

Team a will be the champion of the tournament if there is no team b that is stronger than team a.

Return the team that will be the champion of the tournament.
*/

class Solution {
public:
    int findChampion(vector<vector<int>>& grid) {
        int maxCount = 0;
        int team = -1;
        for (int i = 0; i < grid.size(); ++i) {
            int count = 0;
            for (int j = 0; j < grid.size(); ++j) {
                count += grid[i][j];
            }

            if (count > maxCount) {
                team = i;
                maxCount = count;
            }
        }

        return team;
    }
};
