/*
A binary watch has 4 LEDs on the top to represent the hours (0-11), and 6 LEDs on the bottom to represent the minutes (0-59). Each LED represents a zero or one, with the least significant bit on the right.

    - For example, the below binary watch reads "4:51".

<image>

Given an integer turnedOn which represents the number of LEDs that are currently on (ignoring the PM), return all possible times the watch could represent. You may return the answer in any order.

The hour must not contain a leading zero.

    - For example, "01:00" is not valid. It should be "1:00".

The minute must consist of two digits and may contain a leading zero.

    - For example, "10:2" is not valid. It should be "10:02".

*/

const int c[10] = {1,2,4,8,1,2,4,8,16,32};

class Solution {
public:
    void func(const int& n, set<vector<int>>& variants, int& hours, int& minutes, short& variant, int a) {
        if (hours > 11 || minutes > 59 ) return;

        if (a == n) {
            variants.insert({hours, minutes});
            return;
        }

        for (int i = 0; i < 10; ++i) {
            unsigned short mask = 1 << i;
            if ((variant & mask) == 0) {
                if (i < 4) {
                    hours += c[i];
                } else {
                    minutes += c[i];
                }

                variant |= mask;
                ++a;

                func(n, variants, hours, minutes, variant, a);

                variant &= ~(mask);
                --a;


                if (i < 4) {
                    hours -= c[i];
                } else {
                    minutes -= c[i];
                }
            }   
        }
    }

    vector<string> getVariants(const set<vector<int>>& variants) {
        vector<string> result;
        for (const vector<int>& i: variants) {
            string row;
            row += to_string(i[0]);

            row += ":";

            if (i[1] < 10) row += "0";

            row += to_string(i[1]);

            result.push_back(row);
        }

        return result;
    }

    vector<string> readBinaryWatch(int n) {
        set<vector<int>> variants;
        int hours = 0;
        int minutes = 0;
        short variant = 0;
        int a = 0;

        func(n, variants, hours, minutes, variant, a);

        return getVariants(variants);
    }
};
