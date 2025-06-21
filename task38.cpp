/*
A string is good if there are no repeated characters.

Given a string s, return the number of good substrings of length three in s​​​​​​.

Note that if there are multiple occurrences of the same substring, every occurrence should be counted.

A substring is a contiguous sequence of characters in a string.
*/

class Solution {
public:
    int countGoodSubstrings(string s) {
        vector<string> a;
        if (s.length() >= 3) {
            for (int i = 0; i < s.length()-2; i++) {
                string b = format("{}{}{}", s[i], s[i+1], s[i+2]);
                vector<char> c;
                for (char j: b) {
                    if (find(c.begin(), c.end(), j) == c.end()) {
                        c.push_back(j);
                    }
                }
                string d(c.begin(), c.end());
                if (b == d) {
                    a.push_back(b);
                }
            }
        }
        return a.size();
    }
};
