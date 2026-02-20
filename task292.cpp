/*
Given a 32-bit integer num, return a string representing its hexadecimal representation. For negative integers, two’s complement method is used.

All the letters in the answer string should be lowercase characters, and there should not be any leading zeros in the answer except for the zero itself.

Note: You are not allowed to use any built-in library method to directly solve this problem.
*/

map<int, char> hexMap = {
    {0, '0'}, {1, '1'}, {2, '2'}, {3, '3'},
    {4, '4'}, {5, '5'}, {6, '6'}, {7, '7'},
    {8, '8'}, {9, '9'}, {10, 'a'}, {11, 'b'},
    {12, 'c'}, {13, 'd'}, {14, 'e'}, {15, 'f'},
};

class Solution {
public:
    string toHex(int m) {
        unsigned int n = m;
        if (n == 0) return "0";
        
        vector<int> digits;
        
        while (n > 0) {
            int digit = n % 16;

            digits.push_back(digit);
            
            n /= 16;
        }
        
        reverse(digits.begin(), digits.end());
        
        string result = "";
        
        for (const int& i: digits) {
            result += hexMap[i];
        }
        
        return result;
    }
};
