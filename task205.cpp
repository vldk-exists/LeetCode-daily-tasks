/*
You are given a 0-indexed string s consisting of only lowercase English letters, where each letter in s appears exactly twice. You are also given a 0-indexed integer array distance of length 26.

Each letter in the alphabet is numbered from 0 to 25 (i.e. 'a' -> 0, 'b' -> 1, 'c' -> 2, ... , 'z' -> 25).

In a well-spaced string, the number of letters between the two occurrences of the ith letter is distance[i]. If the ith letter does not appear in s, then distance[i] can be ignored.

Return true if s is a well-spaced string, otherwise return false.
*/

class Solution {
public:
    bool checkDistances(string s, vector<int>& distance) {
        unordered_map<char, int> freqMap;

        // O(n**2)
        for (int i = 0; i < s.length(); i++) {
            if (freqMap.find(s[i]) == freqMap.end()) {
                freqMap[s[i]] = 0;
                for (int j = i+1; j < s.length(); j++) {
                    if (s[i] == s[j]) break;
                    freqMap[s[i]]++;
                }
            }
        }
        
        for (int i = 0; i < distance.size(); i++) {
            if (freqMap.find((char)(i+'a')) != freqMap.end()) {
                if (distance[i] != freqMap[(char)(i+'a')]) return false;
            }
        }

        return true;
    }
};
