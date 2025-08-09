/*
An integer x consisting of 2 * n digits is symmetric if the sum of the first n digits of x is equal to the sum of the last n digits of x. Numbers with an odd number of digits are never symmetric.

Return the number of symmetric integers in the range [low, high].
*/

vector<int> getDigits(int x) {
    vector<int> digits;
    while(x>0) {
        digits.push_back(x%10);
        x/=10;
    }
    return digits;
}

class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        int s = 0;
        while (low <= high) {
            vector<int> digits = getDigits(low);
            if (!(digits.size() & 1)) {
                int n = digits.size() / 2;
                if (accumulate(digits.begin(), digits.begin()+n, 0) == accumulate(digits.begin()+n, digits.end(), 0)) s++;
            }
            low++;
        }

        return s;
    }
};
