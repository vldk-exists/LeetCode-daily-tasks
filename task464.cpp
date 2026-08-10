/*
Given a string s, return the maximum length of a substring such that it contains at most two occurrences of each character. 
*/

class Solution {
public:
    int maximumLengthSubstring(string s) {
        // int i = 0;
        // int maxLength = 0;

        // while (i < s.length()) {
        //     char freq[26] = {0};
        //     int length = 0;

        //     for (int j = i; j < s.length(); ++j) {
        //         if (freq[s[j] - 'a'] == 2) {
        //             break;
        //         } else {
        //             ++freq[s[j] - 'a'];
        //             ++length;
        //         }
        //     }

        //     if (length > maxLength) 
        //         maxLength = length;

        //     ++i;
        // }

        // return maxLength;

        int i = 0;
        int j = 0;
        int freq[26] = {0};
        int length = 0;
        int maxLength = 0;

        while (j < s.length()) {
            if (freq[s[j]-'a'] == 2) {
                if (length > maxLength)
                    maxLength = length;

                --freq[s[i]-'a'];
                ++i;
                --length;
            } else {
                ++freq[s[j]-'a'];
                ++length;
                ++j;
            }
        }

        if (length > maxLength)
            maxLength = length;

        return maxLength;
    }
};
