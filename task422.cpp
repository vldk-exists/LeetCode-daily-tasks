/*
You are given a string s. Reorder the string using the following algorithm:

    - Remove the smallest character from s and append it to the result.
    - Remove the smallest character from s that is greater than the last appended character, and append it to the result.
    - Repeat step 2 until no more characters can be removed.
    - Remove the largest character from s and append it to the result.
    - Remove the largest character from s that is smaller than the last appended character, and append it to the result.
    - Repeat step 5 until no more characters can be removed.
    - Repeat steps 1 through 6 until all characters from s have been removed.

If the smallest or largest character appears more than once, you may choose any occurrence to append to the result.

Return the resulting string after reordering s using this algorithm.
*/

class Solution {
public:
    char f[26] = {};

    bool check() {
        for (int i = 0; i < 26; ++i) {
            if (f[i] > 0) return false;
        }

        return true;
    }

    string sortString(string s) {
        for (const char& i: s) ++f[i - 'a'];

        string result = "";

        while (1) {
            for (int i = 0; i < 26; ++i) {
                if (f[i] > 0) {
                    result += i + 'a';
                    --f[i];
                }
            }

            for (int i = 25; i >= 0; --i) {
                if (f[i] > 0) {
                    result += i + 'a';
                    --f[i];
                }
            }

            if (check()) break;
        }

        return result;
    }
};
