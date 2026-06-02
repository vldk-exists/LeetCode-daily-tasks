/*
You are given an m x n matrix grid consisting of positive integers.

Perform the following operation until grid becomes empty:

    -- Delete the element with the greatest value from each row. If multiple such elements exist, delete any of them.
    -- Add the maximum of deleted elements to the answer.

Note that the number of columns decreases by one after each operation.

Return the answer after performing the operations described above.
*/

class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        const int m = grid.size();
        const int n = grid[0].size();        
        
        for (int i = 0; i < m; ++i) 
            sort(grid[i].begin(), grid[i].end());

        int ans = 0;
        
        for (int i = 0; i < n; ++i) {
            int maxEl = 0;
            for (int j = 0; j < m; ++j) {
                maxEl = max(maxEl, grid[j].back());
                grid[j].pop_back();
            }

            ans += maxEl;
        }

        return ans;
    }
};
