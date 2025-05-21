/*
Given an alphanumeric string s, return the second largest numerical digit that appears in s, or -1 if it does not exist.

An alphanumeric string is a string consisting of lowercase English letters and digits.
*/

#include <cctype>
#include <vector>

class Solution {
public:
    int secondHighest(string s) {
        vector<char> array;
        for (char i: s) {
            if (isdigit(i) && find(array.begin(), array.end(), i) == array.end()) {
                array.push_back(i);
            }
        }
        sort(array.begin(), array.end());
        if (array.size() >= 2) {
            return array[array.size()-2]-'0';
        }
        return -1;
    }
};
