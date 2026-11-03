/*
Given an integer n, return a string with n characters such that each character in such string occurs an odd number of times.

The returned string must contain only lowercase English letters. If there are multiples valid strings, return any of them.  
*/

class Solution {
public:
    string generateTheString(int n) {
        string result = "";
        
        bool c = (n & 1) == 0;

        result += string(n-c, 'a');

        if (c) {
            result += 'b';
        }

        return result;
    }
};
