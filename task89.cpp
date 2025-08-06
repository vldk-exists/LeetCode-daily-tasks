/*
You are given a string num, representing a large integer. Return the largest-valued odd integer (as a string) that is a non-empty substring of num, or an empty string "" if no odd integer exists.

A substring is a contiguous sequence of characters within a string.
*/

class Solution {
public:
    string largestOddNumber(string num) {
        string a = num;
        while (!a.empty()) {
            int n = a[a.size()-1] - '0';
            if ((n & 1) != 0) break;
            a.pop_back();
        }

        return a;
    }
};
