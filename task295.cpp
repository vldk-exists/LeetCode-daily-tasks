/*
Given a string s, reverse the string according to the following rules:

    - All the characters that are not English letters remain in the same position.
    - All the English letters (lowercase or uppercase) should be reversed.

Return s after reversing it.
*/

class Solution {
public:
    string reverseOnlyLetters(string s) {
        const int n = s.length();
        stack<char> letters;
        map<int, char> notLetters;

        for (int i = 0; i < n; i++) {
            if (isalpha(s[i])) letters.push(s[i]);
            else notLetters[i] = s[i];
        }

        string result = "";
        for (int i = 0; i < n; i++) {
            if (notLetters.find(i) != notLetters.end()) {
                result += notLetters[i];
            } else {
                result += letters.top();
                letters.pop();
            }
        }

        return result;
    }
};
