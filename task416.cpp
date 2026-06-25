/*
You are given an array of digits called digits. Your task is to determine the number of distinct three-digit even numbers that can be formed using these digits.

Note: Each copy of a digit can only be used once per number, and there may not be leading zeros.
*/

class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        // set<int> count;
        
        // Since you nailed the brute force approach, how might you optimize this if the input size grew significantly larger?

        // for (int i = 0; i < digits.size(); ++i) {
        //     for (int j = 0; j < digits.size(); ++j) {
        //         for (int k = 0; k < digits.size(); ++k) {
        //             if (i != j && j != k && i != k) {
        //                 int a = digits[i] * 100 + digits[j] * 10 + digits[k];
                        
        //                 if (a >= 100 && a % 2 == 0 && count.find(a) == count.end()) count.insert(a); 
        //             } 
        //         }
        //     }
        // }

        // return count.size();

        int m[10] = {};
        for (const int& i: digits) ++m[i];

        int count = 0;

        for (int i = 100; i <= 998; i += 2) {
            int i_m[10] = {};

            int x = i;
            for (int j = 0; j < 3; ++j) {
                ++i_m[x % 10];
                x /= 10;
            }

            bool f = true;

            for (int j = 0; j < 10; ++j) {
                if (m[j] < i_m[j]) {
                    f = false;
                    break;
                }
            }

            if (f) ++count;
        }

        return count;
    }
};
