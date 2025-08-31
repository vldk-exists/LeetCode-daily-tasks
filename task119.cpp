/*
You are given a binary string s that contains at least one '1'.

You have to rearrange the bits in such a way that the resulting binary number is the maximum odd binary number that can be created from this combination.

Return a string representing the maximum odd binary number that can be created from the given combination.

Note that the resulting string can have leading zeros.
*/

class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        unordered_map<char, int> binaryMap = {
            {'0', 0},
            {'1', 0},
        };

        for (char i: s) {
            if (binaryMap.find(i) != binaryMap.end()) binaryMap[i]++;
            else binaryMap[i] = 1;
        }

        string res;
        
        if (binaryMap['1'] > 1) {
            for (int i = 0; i < binaryMap['1']-1; i++) res += '1';
        }  

        for (int i = 0; i < binaryMap['0']; i++) res += '0';

        res += '1'; 

        return res;
    }
};
