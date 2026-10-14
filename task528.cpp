/*
You are given a string s of even length. Split this string into two halves of equal lengths, and let a be the first half and b be the second half.

Two strings are alike if they have the same number of vowels ('a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'). Notice that s contains uppercase and lowercase letters.

Return true if a and b are alike. Otherwise, return false.
*/

const unordered_set<char> vowels = {
    'a', 'e', 'i', 'o', 'u',
    'A', 'E', 'I', 'O', 'U'
};

bool isVowel(const char& x) {
    return vowels.find(x) != vowels.end();
}

class Solution {
public:
    bool halvesAreAlike(string s) {
        int vowels1 = 0, vowels2 = 0;
        for (int i = 0, j = s.length()/2; i < s.length()/2; ++i, ++j) {
            vowels1 += isVowel(s[i]);
            vowels2 += isVowel(s[j]);
        }

        return vowels1 == vowels2;
    }
};
