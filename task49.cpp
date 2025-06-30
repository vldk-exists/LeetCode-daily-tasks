/*
Given a string s, calculate its reverse degree.

The reverse degree is calculated as follows:

    1. For each character, multiply its position in the reversed alphabet ('a' = 26, 'b' = 25, ..., 'z' = 1) with its position in the string (1-indexed).
    2. Sum these products for all characters in the string.

Return the reverse degree of s.
*/

class Solution {
public:
    int reverseDegree(string s) {
        unordered_map<char, int> alphabet;
        for (int i = 0; i < 26; i++) {
            alphabet['a'+i] = 26-i;
        }

        vector<int> reverse_degree;

        for (int j = 0; j < s.size(); j++) {
            reverse_degree.push_back(alphabet[s[j]]*(j+1));
        }

        return accumulate(reverse_degree.begin(), reverse_degree.end(), 0);
    }
};

