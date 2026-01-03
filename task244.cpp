/*
You are given an integer array nums.

Return true if the frequency of any element of the array is prime, otherwise, return false.

The frequency of an element x is the number of times it occurs in the array.

A prime number is a natural number greater than 1 with only two factors, 1 and itself.
*/

class Solution {
public:
    bool isPrime(int n) {
        if (n <= 1)
            return false;

        for (int i = 2; i < n; i++)
            {
                if (n % i == 0) return false;
            }

        return true;
    }

    bool checkPrimeFrequency(vector<int>& nums) {
        map<int, int> freqMap;

        for (const int& i: nums) {
            freqMap[i]++;
        }

        for (const auto& i: freqMap) {
            if (isPrime(i.second)) return true;
        }

        return false;
    }
};
