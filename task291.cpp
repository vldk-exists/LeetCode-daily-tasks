/*
Given a binary string s, return the number of non-empty substrings that have the same number of 0's and 1's, and all the 0's and all the 1's in these substrings are grouped consecutively.

Substrings that occur multiple times are counted the number of times they occur.
*/

class Solution {
public:
    int countBinarySubstrings(string s) {
        vector<int> a;

        int b = 1;
        for (int i = 1; i < s.length(); i++) {
            if (s[i-1] != s[i]) {
                a.push_back(b);
                b = 1;
            } else b++;
        } 
        
        if (s.length() >= b) a.push_back(b);

        int count = 0;
        for (int i = 0; i < a.size()-1; i++) {
            count += min(a[i], a[i+1]);
        }

        return count;
    }
};
