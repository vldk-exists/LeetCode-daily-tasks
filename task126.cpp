/*
Given an integer n, return any array containing n unique integers such that they add up to 0.
*/

class Solution {
public:
    vector<int> sumZero(int n) {
        if (n == 1) return {0};
        vector<int> res;
        
        int a = n / 2;

        for (int i = a; i > 0; i--) {
            res.push_back(-i);
        }

        if (n & 1 != 0) res.push_back(0);

        for (int i = 1; i <= a; i++) {
            res.push_back(i);
        }

        return res;
    }
};
