/*
You are given a 0-indexed string array words, where words[i] consists of lowercase English letters.

In one operation, select any index i such that 0 < i < words.length and words[i - 1] and words[i] are anagrams, and delete words[i] from words. Keep performing this operation as long as you can select an index that satisfies the conditions.

Return words after performing all operations. It can be shown that selecting the indices for each operation in any arbitrary order will lead to the same result.

An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase using all the original letters exactly once. For example, "dacb" is an anagram of "abdc".
*/

class Solution {
public:
    bool checkAnagram(const string& a, const string& b) {
        string word1 = a;
        string word2 = b;

        sort(word1.begin(), word1.end());
        sort(word2.begin(), word2.end());

        return word1 == word2;
    }

    vector<string> removeAnagrams(vector<string>& words) {
        int i = 0, j = 1;

        while (j < words.size()) {
            if (checkAnagram(words[i], words[j])) words.erase(words.begin()+j);
            else {
                i++;
                j++;
            }
        }

        return words;
    }
};
