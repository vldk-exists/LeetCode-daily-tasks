/*
Given an integer n, return true if it is possible to represent n as the sum of distinct powers of three. Otherwise, return false.

An integer y is a power of three if there exists an integer x such that y == 3x.
*/

class Solution {
public:
    string toTernary(int n) {
        if (n == 0) return "0";

        string b;

        while (n > 0) {
            int c = n % 3;
            b += '0'+c;
            n /= 3;
        }

        reverse(b.begin(), b.end());

        return b;
    }

    bool checkPowersOfThree(int n) {
        string a = toTernary(n);

        if (a.find("2") == string::npos) return true;
        else return false;
    }
};
