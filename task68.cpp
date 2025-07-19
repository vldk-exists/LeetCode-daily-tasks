/*
Given a string s, find the length of the longest without duplicate characters.
*/

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        if (n > 1) {
            int i = 0;
            int max_length = 0;
            int length = 0;
            string substring = "";
            while (i < n) {
                if (substring.find(s[i]) == string::npos) {
                    substring += s[i];
                    length++;
                    i++;
                } else {
                    max_length = max_length < length ? length : max_length;
                    length--;
                    substring = substring.substr(1);
                }
            }

            max_length = max_length < length ? length : max_length;

            return max_length;
        }
        return n;
    }
};
