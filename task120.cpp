/*
Given an array of strings words and a character separator, split each string in words by separator.

Return an array of strings containing the new strings formed after the splits, excluding empty strings.
*/

class Solution {
public:
    vector<string> splitWordsBySeparator(vector<string>& words, char separator) {
        vector<string> res;

        for (string word: words) {
            string buffer = "";
            for (char symbol: word) {
                if (symbol == separator) {
                    if (buffer.length() > 0) {
                        res.push_back(buffer);
                        buffer = "";
                    }
                } else buffer += symbol; 
            }
            if (buffer.length() > 0) res.push_back(buffer);
        }

        return res;
    }
};
