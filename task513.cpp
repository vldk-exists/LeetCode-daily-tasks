/*
You are given a string s that consists of lower case English letters and brackets.

Reverse the strings in each pair of matching parentheses, starting from the innermost one.

Your result should not contain any brackets.
*/

class Solution {
public:
    string reverseParentheses(string s) {
        int a[2000] = {-1};

        stack<int> st;

        for (int i = 0; i < s.length(); ++i) {
            if (s[i] == '(') st.push(i);
            else if (s[i] == ')') {
                a[st.top()] = i;
                st.pop();
            }
        }

        for (int i = 1999; i >= 0; --i) {
            if (a[i] >= 0) {
                int k = i+1;
                int l = a[i]-1;

                while (k < l) {
                    swap(s[k], s[l]);

                    k++;
                    l--;
                } 
            }
        }

        string res = "";

        for (const char& i: s) {
            if (i != '(' && i != ')') res += i;
        }

        return res;
    }
};
