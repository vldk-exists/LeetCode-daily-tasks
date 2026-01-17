/*
You are given a binary string s and an integer k.

A binary string satisfies the k-constraint if either of the following conditions holds:

    - The number of 0's in the string is at most k.
    - The number of 1's in the string is at most k.

Return an integer denoting the number of substrings of s that satisfy the k-constraint.
*/

class Solution {
public:
    int countKConstraintSubstrings(string s, int k) {
        int count = 0, ones = 0, zeros = 0;

        for (int i = 0; i < s.length(); i++) {
            for (int j = i; j < s.length(); j++) {
                if (s[j] == '1') ones++;
                else zeros++;

                if (ones <= k || zeros <= k) count++;
            }
            ones = 0;
            zeros = 0;
        }

        return count;
    }
};   
