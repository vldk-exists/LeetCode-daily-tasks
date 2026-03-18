/*
You are given a string s consisting only of the characters '1' and '2'.

You may delete any number of characters from s without changing the order of the remaining characters.

Return the largest possible resultant string that represents an even integer. If there is no such string, return the empty string "".
*/

class Solution {
public:
    string largestEven(string s) {
        while (!s.empty()) {
            if (s.back() == '2') return s;
            s.pop_back();
        }
        return "";
    }
};
