/*
You are given a 0-indexed 2D integer matrix grid of size n * n with values in the range [1, n2]. Each integer appears exactly once except a which appears twice and b which is missing. The task is to find the repeating and missing numbers a and b.

Return a 0-indexed integer array ans of size 2 where ans[0] equals to a and ans[1] equals to b.
*/

class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int> res;
        
        int n = grid.size();

        set<int> values;

        // finding repeated value
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (values.find(grid[i][j]) != values.end()) {
                    res.push_back(grid[i][j]);
                } else values.insert(grid[i][j]);
            }
        }

        // finding missing value;
        for (int i = 1; i <= n*n; i++) {
            if (values.find(i) == values.end()) {
                res.push_back(i);
                break;
            }
        }

        return res;
    }
};
