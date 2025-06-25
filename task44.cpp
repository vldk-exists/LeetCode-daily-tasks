/*
You are given a string s consisting of lowercase English letters, and an integer k. Your task is to convert the string into an integer by a special process, and then transform it by summing its digits repeatedly k times. More specifically, perform the following steps:

    Convert s into an integer by replacing each letter with its position in the alphabet (i.e. replace 'a' with 1, 'b' with 2, ..., 'z' with 26).
    Transform the integer by replacing it with the sum of its digits.
    Repeat the transform operation (step 2) k times in total.

For example, if s = "zbax" and k = 2, then the resulting integer would be 8 by the following operations:

    Convert: "zbax" ➝ "(26)(2)(1)(24)" ➝ "262124" ➝ 262124
    Transform #1: 262124 ➝ 2 + 6 + 2 + 1 + 2 + 4 ➝ 17
    Transform #2: 17 ➝ 1 + 7 ➝ 8

Return the resulting integer after performing the operations described above.
*/

class Solution {
public:
    int getLucky(string s, int k) {
        unordered_map<char, int> a;
        for (int i = 0; i < 26; i++) {
            a[(char)('a'+i)] = i+1;
        }

        string a1;
        for (char i: s) {
            a1 += to_string(a[i]);
        }

        vector<int> c;
        for (char i: a1) {
            c.push_back((int)(i - '0'));
        }

        for (int i = 0; i < k-1; i++) {
            string c1 = to_string((int)accumulate(c.begin(), c.end(), 0));
            vector<int> c2;
            for (char i: c1) {
                c2.push_back((int)(i - '0'));
            }
            c = c2;
        }

        return accumulate(c.begin(), c.end(), 0);
    }
};
