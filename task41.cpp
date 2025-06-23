/*
Given an integer num, repeatedly add all its digits until the result has only one digit, and return it.
*/

class Solution {
public:
    int addDigits(int num) {
        int a = num;
        while (a > 9) {
            vector<int> b;
            for (char i: to_string(a)) {
                b.push_back(i - '0');
            }
            a = accumulate(b.begin(), b.end(), 0);
        }
        return a;
    }
};
