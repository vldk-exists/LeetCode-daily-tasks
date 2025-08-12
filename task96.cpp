/*
Given an array of strings words, return the first palindromic string in the array. If there is no such string, return an empty string "".

A string is palindromic if it reads the same forward and backward.
*/

class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for (string word: words) {
            int i = 0, j = word.size()-1;

            while (i < j)
            {
                if (word[i] != word[j]) break;
                i++;
                j--;
            }
            if (i >= j) return word;
        }
        return "";
    }
};
