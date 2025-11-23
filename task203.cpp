/*
The value of an alphanumeric string can be defined as:

    - The numeric representation of the string in base 10, if it comprises of digits only.
    - The length of the string, otherwise.

Given an array strs of alphanumeric strings, return the maximum value of any string in strs.
*/

class Solution {
public:
    bool checkIfDigit(const string& str) {
        for (const char& i: str) {
            if (isalpha(i)) return false;
        }

        return true;
    }

    int maximumValue(vector<string>& strs) {
        int maxVal = INT_MIN;
        
        for (const string& str: strs) {
            if (checkIfDigit(str)) {
                maxVal = max(maxVal, stoi(str));
            } else maxVal = max(maxVal, (int)str.length());
        }

        return maxVal;
    }
};
