/*
You are given a string sentence that consist of words separated by spaces. Each word consists of lowercase and uppercase letters only.

We would like to convert the sentence to "Goat Latin" (a made-up language similar to Pig Latin.) The rules of Goat Latin are as follows:

    - If a word begins with a vowel ('a', 'e', 'i', 'o', or 'u'), append "ma" to the end of the word.
        For example, the word "apple" becomes "applema".
    - If a word begins with a consonant (i.e., not a vowel), remove the first letter and append it to the end, then add "ma".
        For example, the word "goat" becomes "oatgma".
    - Add one letter 'a' to the end of each word per its word index in the sentence, starting with 1.
        For example, the first word gets "a" added to the end, the second word gets "aa" added to the end, and so on.

Return the final sentence representing the conversion from sentence to Goat Latin.
*/

const set<char> VOWELS = {'a', 'e', 'i', 'o', 'u'};

class Solution {
public:
    string toGoatLatin(string sentence) {
        int wordIndex = 1;

        string result;

        bool isFirstLetter = false;
        char toAdd = 0;
        for (const char& i: sentence) {
            if (i != ' ') {
                if (!isFirstLetter) {
                    if (VOWELS.find(tolower(i)) == VOWELS.end()) {
                        toAdd = i;
                    } else result += i;
                    isFirstLetter = true;
                } else result += i;
            } else {
                if (toAdd > 0) {
                    result += toAdd;
                    toAdd = 0;
                }
                result += "ma" + string(wordIndex, 'a');
                result += ' ';
                isFirstLetter = false;
                ++wordIndex;
            }
        }

        if (toAdd > 0) result += toAdd;
        result += "ma" + string(wordIndex, 'a');

        return result;
    }
};

// const set<char> VOWELS = {'a', 'e', 'i', 'o', 'u'};

// class Solution {
// public:
//     vector<string> split(const string& str) {
//         vector<string> result;
//         string buffer = "";

//         for (const char& i: str) {
//             if (i == ' ') {
//                 result.push_back(buffer);
//                 buffer = "";
//             } else buffer += i;
//         }

//         if (!buffer.empty()) result.push_back(buffer);

//         return result;
//     }

//     string toGoatLatin(string sentence) {
//         int wordIndex = 1;

//         vector<string> words = split(sentence);

//         string result = "";

//         for (int i = 0; i < words.size(); ++i) {
//             if (VOWELS.find(tolower(words[i][0])) == VOWELS.end()) {
//                 result += words[i].substr(1, words[i].length()-1);
//                 result += words[i][0];
//             } else result += words[i];

//             result += "ma" + string(wordIndex, 'a');

//             if (i < words.size()-1) result += ' ';

//             ++wordIndex;
//         }

//         return result;
//     }
// };
