/*
You are given a string allowed consisting of distinct characters and an array of strings words. A string is consistent if all characters in the string appear in the string allowed.

Return the number of consistent strings in the array words.
*/

class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        short a[26] = {0};
        for (const char& i: allowed) {
            ++a[i-'a'];
        }

        int count = 0;
        for (const string& i: words) {
            bool toCount = true;
            for (const char& j: i) {
                if (!a[j-'a']) {
                    toCount = false;
                    break;
                }
            }

            count += toCount;
        }

        return count;
    }
};
