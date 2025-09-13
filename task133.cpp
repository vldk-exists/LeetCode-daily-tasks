/*
You are given a string s consisting of lowercase English letters ('a' to 'z').

Your task is to:

    Find the vowel (one of 'a', 'e', 'i', 'o', or 'u') with the maximum frequency.
    Find the consonant (all other letters excluding vowels) with the maximum frequency.

Return the sum of the two frequencies.

Note: If multiple vowels or consonants have the same maximum frequency, you may choose any one of them. If there are no vowels or no consonants in the string, consider their frequency as 0.
The frequency of a letter x is the number of times it occurs in the string. 
*/

const vector<char> VOWELS = {'a', 'e', 'i', 'o', 'u'};

class Solution {
public:
    int maxFreqSum(string s) {
        unordered_map<char, int> vowelsMap, consonantMap;

        int maxFreqVowels = 0;
        int maxFreqConsonants = 0;

        for (const char i: s) {
            if (find(VOWELS.begin(), VOWELS.end(), i) != VOWELS.end()) {
                if (vowelsMap.find(i) != vowelsMap.end()) vowelsMap[i]++;
                else vowelsMap[i] = 1;

                maxFreqVowels = max(maxFreqVowels, vowelsMap[i]);
            } else {
                if (consonantMap.find(i) != consonantMap.end()) consonantMap[i]++;
                else consonantMap[i] = 1;

                maxFreqConsonants = max(maxFreqConsonants, consonantMap[i]);
            } 
        }

        return maxFreqVowels + maxFreqConsonants;
    }
};
