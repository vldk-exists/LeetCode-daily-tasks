/*
You are given a positive integer num. You may swap any two digits of num that have the same parity (i.e. both odd digits or both even digits).

Return the largest possible value of num after any number of swaps.
*/

class Solution {
public:
    int largestInteger(int num) {
        vector<int> a;
        while (num > 0) {
            a.push_back(num % 10);
            num /= 10;
        }

        reverse(a.begin(), a.end());

        int i = 0;
        while (i < a.size()-1) {
            bool parity = false;
            if ((a[i] & 1) == 0) parity = true;

            int maxIndex = -1;
            int maxValue = -1;
            for (int j = i+1; j < a.size(); j++) {
                if (parity) {
                    if (a[j] % 2 == 0) {
                        if (a[j] > maxValue) {
                            maxValue = a[j];
                            maxIndex = j;
                        }
                    }
                } else {
                    if (a[j] % 2 > 0) {
                        if (a[j] > maxValue) {
                            maxValue = a[j];
                            maxIndex = j;
                        }
                    }
                }
            }
            if (maxValue > 0) {
                if (a[i] < maxValue) {
                    swap(a[i], a[maxIndex]);
                }
            }
            
            i++;
        }

        int result = 0;
        for (const int& i : a) {
            result = result * 10 + i;
        }

        return result;
    }
};
