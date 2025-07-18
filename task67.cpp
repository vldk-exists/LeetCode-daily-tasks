/*
Given a string s which consists of lowercase or uppercase letters, return the length of the longest palindrome that can be built with those letters.

Letters are case sensitive, for example, "Aa" is not considered a palindrome.
*/

class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> a;
        for (char i: s) {
            if (a.find(i) != a.end()) {
                a[i]++;
            } else {
                a[i] = 1;
            }
        }

        int b = 0;
        bool c = false;
        for (auto &it: a) {
            if (it.second % 2 == 0) {
                b += it.second;
            } else {
                b += it.second-1;
                c = true;
            }
        } 
        if (c) b++;
        return b;
    }
};
