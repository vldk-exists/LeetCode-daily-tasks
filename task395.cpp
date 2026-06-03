/*
You are given a string s and an integer k.

Reverse the first k characters of s and return the resulting string.
*/

class Solution {
public:
    string reversePrefix(string s, int k) {
        int i = 0;
        int j = k-1;

        while (i < k / 2) {
            swap(s[i], s[j]);
            ++i;
            --j;
        }

        return s;
    }
};
