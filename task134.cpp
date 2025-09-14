/*
You are given a binary string s consisting only of zeroes and ones.

A substring of s is considered balanced if all zeroes are before ones and the number of zeroes is equal to the number of ones inside the substring. Notice that the empty substring is considered a balanced substring.

Return the length of the longest balanced substring of s.

A substring is a contiguous sequence of characters within a string.
*/

class Solution {
public:
    int findTheLongestBalancedSubstring(string s) {
        if (s.length() == 1) return 0;
        vector<int> a;

        int b = 0;
        for (const char i: s) {
            if (i == '1') {
                b++;
            } else {
                if (b > 0) {
                    a.push_back(b);
                    b = 0;
                }
                a.push_back(0);
            }
        }
        if (b > 0) a.push_back(b);

        vector<int> c;

        int zeros = 0, i = 0, temp = 0;

        while (i < a.size()) {
            if (a[i] == 0) {
                zeros++;
                i++;
            } else {
                if (zeros == a[i]) {
                    c.push_back(a[i]+zeros);
                    zeros = 0;
                    i++;
                } else if (zeros > a[i]) {
                    i -= zeros-1;
                    zeros = 0;
                } else {
                    c.push_back(zeros*2);
                    zeros = 0;
                    i++;
                }
            }
        }
        
        if (c.empty()) return 0;
        return *max_element(c.begin(), c.end());
    }
};
