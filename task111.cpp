/*
You are given two strings word1 and word2. Merge the strings by adding letters in alternating order, starting with word1. If a string is longer than the other, append the additional letters onto the end of the merged string.

Return the merged string.
*/

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string mergedString = "";

        int m = word1.size();
        int n = word2.size();    

        int i = 0;
        while (i < m) {
            if (i < n) {
                mergedString += word1[i];
                mergedString += word2[i];
            } else {
                mergedString += word1[i];
            }
            i++;
        }

        if (mergedString.size() < m+n) {
            for (; i < word2.size(); i++) mergedString += word2[i];
        }
        return mergedString;
    }
};
