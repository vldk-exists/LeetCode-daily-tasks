/*
Given an array of strings words, return the words that can be typed using letters of the alphabet on only one row of American keyboard like the image below.

Note that the strings are case-insensitive, both lowercased and uppercased of the same letter are treated as if they are at the same row.

In the American keyboard:

    - the first row consists of the characters "qwertyuiop",
    - the second row consists of the characters "asdfghjkl", and
    - the third row consists of the characters "zxcvbnm".
*/

const vector<string> K = {
    "qwertyuiopQWERTYUIOP",
    "asdfghjklASDFGHJKL",
    "zxcvbnmZXCVBNM",
};

class Solution {
public:
    bool checkRow(const string& row, const string& word) {
        for (const char& letter: word) {
            if (row.find(letter) == string::npos) return false;
        }
        return true;
    }

    vector<string> findWords(vector<string>& words) {
        vector<string> result;

        for (string word: words) {
            if (checkRow(K[0], word) || checkRow(K[1], word) || checkRow(K[2], word)) result.push_back(word);
        }

        return result;
    }
};
