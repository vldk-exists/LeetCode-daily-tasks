/*
Given a string s, check if it can be constructed by taking a substring of it and appending multiple copies of the substring together.
*/

class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string s_copy = s;
        string a(1, s_copy[0]);
        s_copy.erase(0, 1);
        
        for (char i: s_copy) {
            string b;
            int j = s.length() / a.length();
            for (int k = 0; k < j; k++) b += a;
            if (b == s) return true;
            a += i;
        }
        return false;
    }
};
