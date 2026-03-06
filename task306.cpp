/*
Given a binary string s without leading zeros, return true if s contains at most one contiguous segment of ones. Otherwise, return false.
*/

class Solution {
public:
    bool checkOnesSegment(string s) {
        int segments = 1;

        char prev = s[0];

        for (int i = 1; i < s.length(); ++i) {
            if (prev == '0' && s[i] == '1') ++segments;
            prev = s[i];
        } 

        return segments == 1;
    }
};
