/*
Given an integer num, return a string of its base 7 representation.
*/

class Solution {
public:
    string convertToBase7(int num) {
        if (num == 0) return "0";
    
        string res = "";
        int x = num;
        if (x < 0) x *= -1;
        while (x > 0) {
            int r = x % 7;
            res += r + '0';
            x = x / 7;
        }

        if (num < 0) res += '-';

        reverse(res.begin(), res.end());

        return res;
    }
};
