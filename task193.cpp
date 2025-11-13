/*
You are given an array of strings words (0-indexed).

In one operation, pick two distinct indices i and j, where words[i] is a non-empty string, and move any character from words[i] to any position in words[j].

Return true if you can make every string in words equal using any number of operations, and false otherwise.
*/

class Solution {
public:
    bool makeEqual(vector<string>& words) {
        int k = words.size();
        unordered_map<char, int> charMap;

        for (const string& word: words) {
            for (const char& i: word) charMap[i]++;
        }

        for (const auto& it: charMap) {
            if (it.second % k != 0) return false;
        }

        return true;
    }
};
