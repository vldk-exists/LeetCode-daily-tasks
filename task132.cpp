/*
Given two strings s and t, return true if they are equal when both are typed into empty text editors. '#' means a backspace character.

Note that after backspacing an empty text, the text will continue empty.
*/

class Solution {
public:
    string process(const string& s) {
        string res = "";

        for (const char& i: s) {
            if (i == '#') {
                if (res.length() > 0) {
                    res.pop_back();
                }
            } else res += i;
        }

        return res;
    }

    bool backspaceCompare(string s, string t) {
        return process(s) == process(t);
    }
};
