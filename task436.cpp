/*
A word is considered valid if:

    - It contains a minimum of 3 characters.
    - It contains only digits (0-9), and English letters (uppercase and lowercase).
    - It includes at least one vowel.
    - It includes at least one consonant.

You are given a string word.

Return true if word is valid, otherwise, return false.
*/

const set<char> vowels = {
    'a', 'e', 'i', 'o', 'u'
};

class Solution {
public:
    bool isValid(string word) {
        if (word.length() < 3) return false;

        bool containsVowel = false;
        bool containsConsonant = false;

        for (const char& i: word) {
            if (isalpha(i)) {
                if (vowels.find(tolower(i)) != vowels.end()) {
                    containsVowel = true;
                } else {
                    containsConsonant = true;
                }
            } else if (!isdigit(i))
                return false;
        }

        return containsVowel && containsConsonant;
    }
};
