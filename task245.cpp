/*
You are given a string array words and a string s, where words[i] and s comprise only of lowercase English letters.

Return the number of strings in words that are a prefix of s.

A prefix of a string is a substring that occurs at the beginning of the string. A substring is a contiguous sequence of characters within a string.
*/

class Solution {
public:
    bool ifPrefix(const string& a, const string& b) {
        for (int i = 0; i < b.size(); i++) {
            if (a[i] != b[i]) return false;
        }

        return true;
    }

    int countPrefixes(vector<string>& words, string s) {
        int count = 0;

        for (const string& word: words) {
            if (ifPrefix(s, word)) count++;
        }

        return count;
    }
};
