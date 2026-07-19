map<int, char> romanNumerals {
    {1, 'I'},
    {5, 'V'},
    {10, 'X'},
    {50, 'L'},
    {100, 'C'},
    {500, 'D'},
    {1000, 'M'}
};

class Solution {
public:
    string intToRoman(int num) {
        int m = 1000;
        string result = "";
        while (num > 0) {
            int d = num / m;
            if (d > 0) {
                if (d < 4) {
                    for (int i = 0; i < d; ++i) 
                        result += romanNumerals[m];
                } else if (d == 4) {
                    result += romanNumerals[m];
                    result += romanNumerals[m*5];
                } else if (d > 4 && d < 9) {
                    result += romanNumerals[m*5];
                    for (int i = 0; i < d-5; ++i) 
                        result += romanNumerals[m];
                } else if (d == 9) {
                    result += romanNumerals[m];
                    result += romanNumerals[m*10];
                }
            }
            num -= d * m;
            m /= 10;
        }

        return result;
    }
};
