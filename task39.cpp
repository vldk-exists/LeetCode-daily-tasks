/*
Given a string s, find the first non-repeating character in it and return its index. If it does not exist, return -1.
*/

class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> a;
        for (char i: s) {
            if (a.find(i) != a.end()) {
                a[i]++;
            } else {
                a[i] = 1;
            }
        }

        for (auto k: a) cout << k.first << ": " << k.second << ", "; cout << endl;

        for (int i = 0; i < s.length(); i++) {
            if (a[s[i]] == 1) {
                return i;
            }
        }
        return -1;
    }
};
