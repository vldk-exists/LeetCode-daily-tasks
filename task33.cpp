/*
Given two strings ransomNote and magazine, return true if ransomNote can be constructed by using the letters from magazine and false otherwise.

Each letter in magazine can only be used once in ransomNote.
*/

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> magazineHash;

        for (char c : magazine) {
            magazineHash[c]++;
        }

        for (char c : ransomNote) {
            if (magazineHash[c] <= 0) {
                return false;
            }
            magazineHash[c]--;
        }

        return true;
    }
};
