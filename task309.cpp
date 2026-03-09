/*
You are given a string s formed by digits and '#'. We want to map s to English lowercase characters as follows:

    - Characters ('a' to 'i') are represented by ('1' to '9') respectively.
    - Characters ('j' to 'z') are represented by ('10#' to '26#') respectively.

Return the string formed after mapping.
*/

class Solution {
public:
    string freqAlphabets(string s) {
        string res = "";
        for (int i = s.length()-1; i >= 0; --i) {
            if (s[i] == '#') {
                res += 'a'+(stoi(string(1,s[i-2]) + string(1,s[i-1]))-1);
                i -= 2;
            } else {
                res += 'a'+(s[i] - '0' - 1);
            }
        }
        reverse(res.begin(), res.end());
        return res;
    }
};
