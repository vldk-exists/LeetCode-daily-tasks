/*
Given two strings a and b, return the length of the longest uncommon subsequence between a and b. If no such uncommon subsequence exists, return -1.

An uncommon subsequence between two strings is a string that is a subsequence of exactly one of them.
*/

class Solution {
public:
    int findLUSlength(string a, string b) {
        // set<string> aS, bS;

        // for (int i = -1; i < (int)a.size(); ++i) {
        //     string c = "";
        //     for (int j = 0; j < a.size(); ++j) {
        //         if (i != j) c += a[j];
        //     }

        //     aS.insert(c);
        // }

        // for (int i = -1; i < (int)b.size(); ++i) {
        //     string c = "";
        //     for (int j = 0; j < b.size(); ++j) {
        //         if (i != j) c += b[j];
        //     }

        //     bS.insert(c);
        // }

        // int maxLength = -1;

        // for (auto it = aS.rbegin(); it != aS.rend(); ++it) {
        //     if (bS.find(*it) == bS.end()) 
        //     {
        //         int length = (*it).length();
        //         if (length > maxLength) 
        //             maxLength = length;
        //     }
        // }


        // for (auto it = bS.rbegin(); it != bS.rend(); ++it) {
        //     if (aS.find(*it) == aS.end()) 
        //     {
        //         int length = (*it).length();
        //         if (length > maxLength) 
        //             maxLength = length;
        //     }
        // }

        // return maxLength;
        if (a == b) return -1;
        return max(a.length(), b.length());
    }
};
