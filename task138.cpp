/*
Given a string s, return the length of the longest substring between two equal characters, excluding the two characters. If there is no such substring return -1.

A substring is a contiguous sequence of characters within a string.
*/

class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        unordered_map<char, int> letterMap;
        vector<int> sizes;

        for (int i = 0; i < s.length(); i++) {
            if (letterMap.find(s[i]) != letterMap.end()) {
                sizes.push_back(i - letterMap[s[i]]-1);
            } else letterMap[s[i]] = i;
        }

        if (!sizes.empty()) return *max_element(sizes.begin(), sizes.end());
        return -1;
    }
};
