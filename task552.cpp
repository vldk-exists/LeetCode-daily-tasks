/*
Given a string s, reverse only all the vowels in the string and return it.

The vowels are 'a', 'e', 'i', 'o', and 'u', and they can appear in both lower and upper cases, more than once.
*/

const set<char> vowels = {'a', 'e', 'i', 'o', 'u'};

class Solution {
public:
    string reverseVowels(string s) {
        int i = 0;
        int j = s.length() - 1;

        while (i < j) {
            if (vowels.find(tolower(s[i])) != vowels.end()) {
                if (vowels.find(tolower(s[j])) != vowels.end()) {
                    swap(s[i], s[j]);
                    ++i;
                    --j;
                } else --j;
            } else ++i;
        }

        return s;
    }
};
