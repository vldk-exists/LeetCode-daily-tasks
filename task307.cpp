/*
You are given a string s consisting of lowercase English letters. A duplicate removal consists of choosing two adjacent and equal letters and removing them.

We repeatedly make duplicate removals on s until we no longer can.

Return the final string after all such duplicate removals have been made. It can be proven that the answer is unique.
*/

class Solution {
public:
    string removeDuplicates(string s) {
        string result = "";

        for (const char& i: s) {
            if (result.length() == 0 || result.back() != i) result += i;
            else result.pop_back();
        }

        return result;
    }
};
