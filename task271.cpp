/*
Given a string s, return the number of segments in the string.

A segment is defined to be a contiguous sequence of non-space characters.
*/

class Solution {
public:
    int countSegments(string s) {
        // vector<string> segments;
        // string buffer = "";

        // for (const char& i: s) {
        //     if (i == ' ') {
        //         if (!buffer.empty()) {
        //             segments.push_back(buffer);
        //             buffer = "";
        //         }
        //     } else buffer += i;
        // }

        // if (!buffer.empty()) segments.push_back(buffer);

        // return segments.size();

        bool a = false;
        int counter = 0;

        for (int i = 0; i < s.length(); i++) {
            if (s[i] == ' ') a = false;
            else {
                if (!a) {
                    a = true;
                    counter++;
                }
            }
        }

        return counter;
    }
};
