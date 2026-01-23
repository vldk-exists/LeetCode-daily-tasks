/*
You are given a string title consisting of one or more words separated by a single space, where each word consists of English letters. Capitalize the string by changing the capitalization of each word such that:

    - If the length of the word is 1 or 2 letters, change all letters to lowercase.
    - Otherwise, change the first letter to uppercase and the remaining letters to lowercase.

Return the capitalized title.
*/

class Solution {
public:
    vector<string> split(const string& str) {
        string buffer = "";
        vector<string> result;
        
        for (const char& i: str) {
            if (i == ' ') {
                result.push_back(buffer);
                buffer = "";
            } else buffer += i;
        }

        result.push_back(buffer);

        return result;
    }

    void capitalize(string& str) {
        if (str.length() > 2) {
            str[0] = toupper(str[0]);

            for (int i = 1; i < str.length(); i++) {
                str[i] = tolower(str[i]); 
            }
        } else {
            for (int i = 0; i < str.length(); i++) {
                str[i] = tolower(str[i]);
            }
        }
    }

    string capitalizeTitle(string title) {
        vector<string> words = split(title);

        string result;
        for (int i = 0; i < words.size(); i++) {
            capitalize(words[i]);
            result += words[i];
            if (i < words.size()-1) result += ' ';
        }

        return result;
    }
};
