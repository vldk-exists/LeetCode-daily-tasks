/*
Given an integer num, return the number of digits in num that divide num.

An integer val divides nums if nums % val == 0.
*/

class Solution {
public:
    int countDigits(int num) {
        int a = 0;
        string b = to_string(num);
        for (char i: b) {    
            int c = i - '0';
            if (num % c == 0) {
                a++;
            }
        }
        return a;
    }
};
