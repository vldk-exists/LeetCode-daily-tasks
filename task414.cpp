/*
Given a string s containing only digits, return the lexicographically smallest string that can be obtained after swapping adjacent digits in s with the same parity at most once.

Digits have the same parity if both are odd or both are even. For example, 5 and 9, as well as 2 and 4, have the same parity, while 6 and 9 do not.
*/

class Solution {
public:
    string getSmallestString(string s) {
        // string a = s;

        // for (int i = 0; i < s.length()-1; ++i) {
        //     int b = s[i]-'0';
        //     int c = s[i+1]-'0';

        //     if ((b % 2 == 0) == (c % 2 == 0)) {
        //         swap(s[i], s[i+1]);
        //         if (s < a) a = s;
        //         swap(s[i], s[i+1]);
        //     }
        // }

        // return a;

        for (int i = 0; i < s.length()-1; ++i) {
            int b = s[i]-'0';
            int c = s[i+1]-'0';

            if ((b % 2 == 0) == (c % 2 == 0) && b > c) {
                swap(s[i], s[i+1]);
                return s;
            }
        }

        return s;
    }
};
