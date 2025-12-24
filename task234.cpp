/*
You are given a 0-indexed string num of length n consisting of digits.

Return true if for every index i in the range 0 <= i < n, the digit i occurs num[i] times in num, otherwise return false.
*/

class Solution {
public:
    bool digitCount(string num) {
        const int n = num.length();
        unordered_map<char, int> freqMap;

        for (const char& i: num) freqMap[i]++;

        for (int i = 0; i < n; i++) {
            int a = i + '0';
            int b = num[i] - '0';
            if (freqMap[a] != b) return false;
        }

        return true;
    }
};
