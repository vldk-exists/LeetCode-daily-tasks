/*
Given a string s, sort it in decreasing order based on the frequency of the characters. The frequency of a character is the number of times it appears in the string.

Return the sorted string. If there are multiple answers, return any of them.
*/

class Solution {
public:
    string frequencySort(string s) {
        int symbols[256] = {0};

        for (const char& i: s) {
            ++symbols[i];
        }

        string res = "";

        for (int i = 0; i < 256; ++i) {
            int maxFreq = 0;
            char symbol;

            for (int j = 0; j < 256; ++j) {
                if (symbols[j] > maxFreq) {
                    maxFreq = symbols[j];
                    symbol = (char)j;
                }
            }

            if (maxFreq > 0) {
                for (int j = 0; j < maxFreq; ++j) {
                    res += symbol;
                }

                symbols[symbol] = 0;
            } else break;
        }

        return res;
    }
};
