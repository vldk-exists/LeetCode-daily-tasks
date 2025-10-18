/*
You are given a 0-indexed array of string words and two integers left and right.

A string is called a vowel string if it starts with a vowel character and ends with a vowel character where vowel characters are 'a', 'e', 'i', 'o', and 'u'.

Return the number of vowel strings words[i] where i belongs to the inclusive range [left, right].
*/

const string vowels = "aeiou";

class Solution {
public:
    bool checkVowels(const string& n) {
        int s = n.length();

        return vowels.find(n[0]) != string::npos && vowels.find(n[s-1]) != string::npos;
    }

    int vowelStrings(vector<string>& words, int left, int right) {
        int count = 0;
        
        for (int i = left; i <= right; i++) {
            if (checkVowels(words[i])) count++;
        }

        return count;
    }
};
