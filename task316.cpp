/*
A string s is nice if, for every letter of the alphabet that s contains, it appears both in uppercase and lowercase. For example, "abABB" is nice because 'A' and 'a' appear, and 'B' and 'b' appear. However, "abA" is not because 'b' appears, but 'B' does not.

Given a string s, return the longest substring of s that is nice. If there are multiple, return the substring of the earliest occurrence. If there are none, return an empty string.
*/

class Solution {
public:
    bool isNice(const set<char>& a) {
        for (const char& i: a) {
            if (a.find(isupper(i) ? tolower(i) : toupper(i)) == a.end())
                return false;
        }

        return true;
    }

    string longestNiceSubstring(string s) {
        string result = "";

        for (int i = 0; i < s.length(); ++i) {
            string buffer = "";
            set<char> a;
            for (int j = i; j < s.length(); ++j) {
                buffer += s[j];
                a.insert(s[j]);
                
                if (isNice(a)) {
                    if (result.length() < buffer.length())
                        result = buffer;
                }
            }

        }

        return result;
    }
};
