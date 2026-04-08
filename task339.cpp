/*
You are given a 0-indexed string word, consisting of lowercase English letters. You need to select one index and remove the letter at that index from word so that the frequency of every letter present in word is equal.

Return true if it is possible to remove one letter so that the frequency of all letters in word are equal, and false otherwise.

Note:

    - The frequency of a letter x is the number of times it occurs in the string.
    - You must remove exactly one letter and cannot choose to do nothing.
*/

class Solution {
public:
    bool check(map<char, int> freq) {
        auto buf = freq.begin();
        if ((*buf).second == 0) ++buf;
        for (auto j = ++freq.begin(); j != freq.end(); ++j) {
            if ((*j).second != 0) {
                if ((*buf).second != (*j).second) return false;
            }
        }

        return true;
    }

    bool equalFrequency(string word) {
        map<char, int> freq;
        
        for (const char& i: word) ++freq[i];

        if (freq.size() == 1) return true;

        for (auto& i: freq) {
            --(i.second);
            if (check(freq)) return true;
            ++(i.second);
        }

        return false;
    }
};
