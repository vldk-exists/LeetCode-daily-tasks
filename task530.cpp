/*
You are given an array of strings words and a string chars.

A string is good if it can be formed by characters from chars (each character can only be used once for each word in words).

Return the sum of lengths of all good strings in words.
*/

class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        int result = 0;

        for (const string& word: words) {
            int a[26] = {0};

            for (const char& i: chars) {
                ++a[i-'a'];
            }

            for (const char& i: word) {
                --a[i-'a'];
            }

            bool b = true;

            for (const int& i: a) {
                if (i < 0) {
                    b = false;
                    break;
                }
            }

            if (b) result += word.length();
        }

        return result;
    }
};
