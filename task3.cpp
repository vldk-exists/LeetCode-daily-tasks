/*
Given a positive integer num represented as a string, return the integer num without trailing zeros as a string.
*/

class Solution {
public:
    string removeTrailingZeros(string num) {
        size_t start = num.find_first_not_of('0');
        size_t end = num.find_last_not_of('0');

        return (start == std::string::npos) ? "" : num.substr(start, end - start + 1);
    }
};
