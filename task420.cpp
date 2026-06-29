/*
Given an array of strings patterns and a string word, return the number of strings in patterns that exist as a substring in word.

A substring is a contiguous sequence of characters within a string.
*/

class Solution {
public:
    // bool p(const string& x, const string& y) {
    //         size_t n = x.length();
    //         size_t m = y.length();
    //         vector<int> pi(m, 0);

    //         {
    //             int i = 1, j = 0;

    //             while (i < m) {
    //                 if (y[j] == y[i]) {
    //                     pi[i] = j+1;
    //                     ++i;
    //                     ++j;
    //                 } else {
    //                     if (j == 0) {
    //                         pi[i] = 0;
    //                         ++i;
    //                     } else {
    //                         j = pi[j-1];
    //                     }
    //                 }
    //             }
    //         }

    //         int i = 0, j = 0;
    //         while (i < n) {
    //             if (x[i] == y[j]) {
    //                 ++i;
    //                 ++j;
    //                 if (j == m) {
    //                     return true;
    //                 }
    //             } else {
    //                 if (j > 0) j = pi[j-1];
    //                 else ++i;
    //             } 
    //         }

    //         return false;
    // }

    int numOfStrings(vector<string>& patterns, string word) {
        int count = 0;
        // for (const string& i: patterns) {
        //     if (p(word, i)) ++count;
        // }
        for (const string& i: patterns) {
            if (word.find(i) != string::npos) ++count;
        }

        return count;
    }
};
