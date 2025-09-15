/*
There is a malfunctioning keyboard where some letter keys do not work. All other keys on the keyboard work properly.

Given a string text of words separated by a single space (no leading or trailing spaces) and a string brokenLetters of all distinct letter keys that are broken, return the number of words in text you can fully type using this keyboard.
*/

class Solution {
public:
    bool findBrokenLetters(string word, string brokenLetters) {
        for (const char i: word) {
            if (brokenLetters.find(i) != string::npos) return true;
        }
        return false;
    }

    int canBeTypedWords(string text, string brokenLetters) {
        vector<string> words;

        string w = "";
        for (const char i: text) {
            if (i == ' ') {
                words.push_back(w);
                w = "";
            } else w += i;
        }

        if (!w.empty()) words.push_back(w);

        int count = 0;

        for (string x: words) {
            if (!findBrokenLetters(x, brokenLetters)) count++; 
        }

        return count;
    }
};
