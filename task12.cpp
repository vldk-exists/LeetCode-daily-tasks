/*
You are given a string word. A letter is called special if it appears both in lowercase and uppercase in word.

Return the number of special letters in word.
*/

class Solution {
public:
    int numberOfSpecialChars(string word) {
        set<char> uppercase;
        set<char> lowercase;

        for (char c : word) {
            if (isupper(c)) {
                uppercase.insert(c);
            } else if (islower(c)) {
                lowercase.insert(c);
            }
        }

        int count = 0;
        for (char uc : uppercase) {
            if (lowercase.count(tolower(uc))) {
                count++;
            }
        }

        return count;
    }
};
