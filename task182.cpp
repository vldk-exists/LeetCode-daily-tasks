/*
A sentence is a list of words that are separated by a single space with no leading or trailing spaces. Each word consists of lowercase and uppercase English letters.

A sentence can be shuffled by appending the 1-indexed word position to each word then rearranging the words in the sentence.

    - For example, the sentence "This is a sentence" can be shuffled as "sentence4 a3 is2 This1" or "is2 sentence4 This1 a3".

Given a shuffled sentence s containing no more than 9 words, reconstruct and return the original sentence.
*/

class Solution {
public:
    string sortSentence(string s) {
        map<int, string> wordMap;

        string word;
        for (const char& symbol: s) {
            if (symbol == ' ') {
                int index = word.length()-1;
                int pos = word[index]-'0';
                word.erase(index, 1);
                wordMap[pos] = word;
                word = "";
            }
            else word += symbol;
        }

        int index = word.length()-1;
        int pos = word[index]-'0';
        word.erase(index, 1);
        wordMap[pos] = word;
        word = "";

        string res;

        for (int i = 1; i <= wordMap.size(); i++) {
            if (i == wordMap.size()) res += wordMap[i];
            else res += wordMap[i] + " ";
        }

        return res;
    }
};
