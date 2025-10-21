/*
A permutation perm of n + 1 integers of all the integers in the range [0, n] can be represented as a string s of length n where:

    s[i] == 'I' if perm[i] < perm[i + 1], and
    s[i] == 'D' if perm[i] > perm[i + 1].

Given a string s, reconstruct the permutation perm and return it. If there are multiple valid permutations perm, return any of them.
*/

class Solution {
public:
    vector<int> diStringMatch(string s) {
        int d = s.length();
        int i = 0;
        vector<int> integers;

        for (const char& symbol: s) {
            if (symbol == 'D') {
                integers.push_back(d);
                d--;
            } else {
                integers.push_back(i);
                i++;
            }
        }

        integers.push_back(i);

        return integers;
    }
};
