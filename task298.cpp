/*
You are given a string text of words that are placed among some number of spaces. Each word consists of one or more lowercase English letters and are separated by at least one space. It's guaranteed that text contains at least one word.

Rearrange the spaces so that there is an equal number of spaces between every pair of adjacent words and that number is maximized. If you cannot redistribute all the spaces equally, place the extra spaces at the end, meaning the returned string should be the same length as text.

Return the string after rearranging the spaces.
*/

class Solution {
public:
    string reorderSpaces(string text) {
        vector<string> words;
        int spaces = 0;
        string buffer;
        for (const char& i: text) {
            if (i == ' ') {
                if (!buffer.empty()) {
                    words.push_back(buffer);
                    buffer = "";
                    
                }
                ++spaces;

            } else buffer += i;
        }

        if (!buffer.empty()) words.push_back(buffer);

        string result = words[0];

        if (words.size() > 1) {
            int extraSpaces = spaces % (words.size() - 1);
            int portion = spaces / (words.size() - 1);
            
            for (int i = 0; i < portion; i++) result += ' ';

            for (int i = 1; i < words.size()-1; i++) {
                result += words[i];
                for (int j = 0; j < portion; j++) result += ' ';
            }

            result += words[words.size()-1];

            for (int i = 0; i < extraSpaces; i++) result += ' ';
        } else {
            for (int i = 0; i < spaces; i++) result += ' ';
        }

        return result; 
    }
};
