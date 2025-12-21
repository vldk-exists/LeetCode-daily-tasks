/*
Given an array of string words, return all strings in words that are a substring of another word. You can return the answer in any order.
*/

class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        int n = words.size();
        
        set<string> substrings;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (i != j) {
                    if (words[i].find(words[j]) != string::npos) {
                        substrings.insert(words[j]);
                    }
                }
            }
        }

        vector<string> result;

        for (const string& i: substrings) result.push_back(i);

        return result;
    }
};
