/*
Given a string s, you can transform every letter individually to be lowercase or uppercase to create another string.

Return a list of all possible strings we could create. Return the output in any order.
*/

class Solution {
public:
    vector<string> letterCasePermutation(string s) {
        const int& n = s.size();
        int letters = 0;

        for (const char& i: s) {
            if (isalpha(i)) ++letters;
        }

        vector<string> res;

        for (int i = 0; i < pow(2, letters); ++i) {
            int k = i;
            string variant = "";
            for (int j = n-1; j >= 0; --j) {
                if (isalpha(s[j])) {
                    if ((k & 1) == 0) variant += tolower(s[j]);
                    else variant += toupper(s[j]);

                    k >>= 1;
                } else variant += s[j];
            }
            reverse(variant.begin(), variant.end());

            res.push_back(variant);
        }

        return res;
    }
};
