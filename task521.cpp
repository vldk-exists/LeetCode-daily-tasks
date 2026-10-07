/*
Implement the myAtoi(string s) function, which converts a string to a 32-bit signed integer.

The algorithm for myAtoi(string s) is as follows:

    - Whitespace: Ignore any leading whitespace (" ").
    - Signedness: Determine the sign by checking if the next character is '-' or '+', assuming positivity if neither present.
    - Conversion: Read the integer by skipping leading zeros until a non-digit character is encountered or the end of the string is reached. If no digits were read, then the result is 0.
    - Rounding: If the integer is out of the 32-bit signed integer range [-231, 231 - 1], then round the integer to remain in the range. Specifically, integers less than -231 should be rounded to -231, and integers greater than 231 - 1 should be rounded to 231 - 1.

Return the integer as the final result.

Note: You must not use any built-in library function that converts a string to a number (for example, atoi, stoi, Integer.parseInt, int(), parseInt, Number()). Perform the conversion manually.
*/

int digits[] = {2, 1, 4, 7, 4, 8, 3, 6, 4, 7};

class Solution {
public:
    int myAtoi(string s) {
        if (s.length() == 0) return 0;
        
        int res = 0;

        int phase = 0; // 0-3

        bool sign = false;
        
        /*

            - spaces
            - leading zeros
            - sign
            - number

        */

        // switch (s[0]) {
        //     case ' ':
        //         break;
        //     case '0':
        //         phase = 1;
        //         break;
        //     case '-':
        //     case '+':
        //         phase = 2;
        //         break;
        //     default:
        //         if (isdigit(s[0]) && s[0] != '0')
        //             phase = 3;
        //         else 
        //             return 0;
        //         break;
        // }

        // phases - done

        int startPos = 0;

        {
            int i = 0;
        
            for (; i < s.length(); ++i) {
                if (phase == 0) {
                    if (s[i] == '+' || s[i] == '-') {
                        sign = s[i] == '-';
                        phase = 2;
                    } else if (s[i] == '0') {
                        phase = 2;
                    } else if (isdigit(s[i])) {
                        break;
                    } else if (s[i] != ' ')     
                        return 0;
                } else if (phase == 2) {
                    if (isdigit(s[i]) && s[i] != '0') {
                        break;
                    } else if (s[i] != '0') 
                        return 0;
                }
            }

            if (i == s.length()) return 0;

            // cout << "success" << endl;

            startPos = i;
        }


        // if (sign) cout << "is negative" << endl;
        // else cout << "is positive" << endl;
        // getting to the first nonzero number - done

        vector<int> d;

        {   
            int i = startPos;

            while (1) {
                if (i == s.length() || !isdigit(s[i])) {
                    --i;
                    break;
                }

                d.push_back(s[i]-'0');

                ++i;
            }
        }

        // cout << d.size() << endl;

        if (d.size() >= 11) {
            if (!sign) return INT_MAX;
            else return INT_MIN;
        } else if (d.size() == 10) {
            int returnVal = returnVal = !sign ? INT_MAX : INT_MIN;
            
            {
                for (int i = 0; i < 10; ++i) {
                    if (d[i] < digits[i]) break;
                    else if (d[i] > digits[i]) 
                        return returnVal;
                }
            }
        } 
        {
            long int m = 1;
            for (int i = d.size()-1; i >= 0; --i) {
                res += d[i] * m;
                m *= 10;
            }

            if (sign) res *= -1;
        }
        

        return res;
    }
};
