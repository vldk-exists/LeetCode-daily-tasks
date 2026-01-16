/*
Given an integer n, add a dot (".") as the thousands separator and return it in string format.
*/

class Solution {
public:
    string thousandSeparator(int n) {
        if (n == 0) return "0"; 
        string result = "";
        int counter = 0;
        while (n > 0) {
            char digit = '0'+n%10;
            if (counter == 3) {
                counter = 1;
                result.insert(result.begin(), '.');
            } else counter++;
            result.insert(result.begin(), digit);
            n /= 10;
        }

        return result;
    }
};
