/*
Given a string licensePlate and an array of strings words, find the shortest completing word in words.

A completing word is a word that contains all the letters in licensePlate. Ignore numbers and spaces in licensePlate, and treat letters as case insensitive. If a letter appears more than once in licensePlate, then it must appear in the word the same number of times or more.

For example, if licensePlate = "aBc 12c", then it contains letters 'a', 'b' (ignoring case), and 'c' twice. Possible completing words are "abccdef", "caaacab", and "cbca".

Return the shortest completing word in words. It is guaranteed an answer exists. If there are multiple shortest completing words, return the first one that occurs in words.
*/

class Solution {
public:
    string shortestCompletingWord(string licensePlate, vector<string>& words) {
        map<char, int> r;

        for (const char& i: licensePlate) {
            if (isalpha(i)) ++r[tolower(i)];
        }

        string res(21, 'z');
        for (const string& i: words) {
            map<char, int> f;
            for (const char& j: i) ++f[j];

            bool checked = true;

            for (const auto& [key, val]: r) {
                if (f.find(key) == f.end() || \
                    f[key] < val) {
                        checked = false;
                        break;
                }
            }

            if (checked && i.length() < res.length()) res = i; 
        }

        return res;
    }
};
