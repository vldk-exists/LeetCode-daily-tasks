/*
You are given an m x n integer grid accounts where accounts[i][j] is the amount of money the ith customer has in the j bank. Return the wealth that the richest customer has.

A customer's wealth is the amount of money they have in all their bank accounts. The richest customer is the customer that has the maximum wealth.
*/

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        const int& n = accounts.size();
        const int& m = accounts[0].size();

        int maxWealth = 0;

        for (int i = 0; i < n; ++i) {
            int wealth = 0;
            for (int j = 0; j < m; ++j) {
                wealth += accounts[i][j];
            }

            if (wealth > maxWealth)
                maxWealth = wealth;
        }

        return maxWealth;
    }
};
