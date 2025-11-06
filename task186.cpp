/*
You are given a string caption representing the caption for a video.

The following actions must be performed in order to generate a valid tag for the video:

    Combine all words in the string into a single camelCase string prefixed with '#'. A camelCase string is one where the first letter of all words except the first one is capitalized. All characters after the first character in each word must be lowercase.

    Remove all characters that are not an English letter, except the first '#'.

    Truncate the result to a maximum of 100 characters.

Return the tag after performing the actions on caption.
*/

class Solution {
public:
    string generateTag(string caption) {
        vector<string> tokens;

        string token = "";
        int resLength = 0;
        for (const char i: caption) {
            if (token.size() == 99) break;
            if (token.empty()) {
                if (i != ' ') {
                    if (tokens.empty()) token += tolower(i);
                    else token += toupper(i);
                    resLength++;
                }
            } else {
                if (i == ' ') {
                    tokens.push_back(token);
                    token = "";
                } else {
                    token += tolower(i);
                    resLength++;
                }
            }

        }
        tokens.push_back(token);

        string res = "#";
        while (resLength > 100) {
            string tokenToPop = tokens.back();
            resLength -= tokenToPop.length();
            tokens.pop_back();
        }

        for (const string& i: tokens) {
            if (!i.empty()) res += i;
        }

        return res;
    }
};
