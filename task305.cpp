/*
You are given a string s consisting only of the characters '0' and '1'. In one operation, you can change any '0' to '1' or vice versa.

The string is called alternating if no two adjacent characters are equal. For example, the string "010" is alternating, while the string "0100" is not.

Return the minimum number of operations needed to make s alternating.
*/

class Solution {
public:
    int getDifference(const string& s, char b) {
        string a = "";
        for (int i = 0; i < s.length(); ++i) {
            a += b;
            if (b == '0') b = '1';
            else b = '0';
        }

        int dif = 0;
        for (int i = 0; i < s.length(); ++i) {
            if (a[i] != s[i]) ++dif;
        }

        return dif;
    }

    int minOperations(string s) {
        int dif1 = getDifference(s, '0');
        int dif2 = getDifference(s, '1');

        return min(dif1, dif2);
    }
};
