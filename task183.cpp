/*
You are given a string s consisting only of uppercase English letters.

You can apply some operations to this string where, in one operation, you can remove any occurrence of one of the substrings "AB" or "CD" from s.

Return the minimum possible length of the resulting string that you can obtain.

Note that the string concatenates after removing the substring and could produce new "AB" or "CD" substrings.
*/

class Solution {
public:
    int minLength(string s) {
        vector<char> stack;

        for (int i = 0; i < s.length(); i++) {
            stack.push_back(s[i]);
            if (stack.size() >= 2) {
                char a = stack[stack.size()-2];
                char b = stack[stack.size()-1];

                string part = {a, b};

                if (part == "AB" || part == "CD") {
                    stack.pop_back();
                    stack.pop_back();
                }          
            }
        }

        return stack.size();
    }
};
