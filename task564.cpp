/*
Given a string paragraph and a string array of the banned words banned, return the most frequent word that is not banned. It is guaranteed there is at least one word that is not banned, and that the answer is unique.

The words in paragraph are case-insensitive and the answer should be returned in lowercase.

Note that words can not contain punctuation symbols.
*/

class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        string word = "";
        unordered_map<string, int> m;

        for (int i = 0; i < paragraph.length(); ++i) {
            if (!isalpha(paragraph[i]) && !word.empty()) {
                ++m[word];
                word = "";
            } else if (isalpha(paragraph[i])) {
                word += tolower(paragraph[i]);
            }
        }

        if (!word.empty()) {
            ++m[word];
        }

        for (const string& i: banned) {
            if (m.find(i) != m.end()) {
                m.erase(i);
            }
        }

        int maxOccur = 0;
        string result = "";

        for (const auto& [key, value]: m) {
            if (value > maxOccur) {
                maxOccur = value;
                result = key;
            }
        }

        return result;
    }
}; 
