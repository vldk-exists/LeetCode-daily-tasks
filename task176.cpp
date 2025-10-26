/*
Given an integer numRows, return the first numRows of Pascal's triangle.

In Pascal's triangle, each number is the sum of the two numbers directly above it as shown:

`gif with example`
*/

class Solution {
public:
    vector<vector<int>> generate(int n) {
        if (n >= 3) {
            vector<vector<int>> res = {{1}, {1, 1}};
        
            for (int i = 2; i < n; i++) {
                vector<int> prevRow = res[i-1];
                vector<int> currRow = {1};
                for (int j = 0; j < i-1; j++) {
                    currRow.push_back(prevRow[j] + prevRow[j+1]);
                }
                currRow.push_back(1);
                res.push_back(currRow);
            }

            return res;
        } else if (n == 2) return {{1}, {1,1}};
        return {{1}};
    }
};
