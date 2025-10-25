/*
Hercy wants to save money for his first car. He puts money in the Leetcode bank every day.

He starts by putting in $1 on Monday, the first day. Every day from Tuesday to Sunday, he will put in $1 more than the day before. On every subsequent Monday, he will put in $1 more than the previous Monday.

Given n, return the total amount of money he will have in the Leetcode bank at the end of the nth day.
*/

class Solution {
public:
    int totalMoney(int n) {
        int a = n / 7;
        int b = n % 7;

        vector<int> c;
        for (int i = 0; i < a; i++) c.push_back(7);
        if (b) c.push_back(b);

        int d = 0, res = 0;
        for (const int& i: c) {
            for (int j = 1+d; j <= i+d; j++) res += j;
            d++;
        }

        return res;
    }
};
