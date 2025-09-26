/*
Given an integer array nums, return the most frequent even element.

If there is a tie, return the smallest one. If there is no such element, return -1.
*/

class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        map<int, int> freqMap;

        for (const int& i: nums) {
            freqMap[i]++;
        }

        int maxFreq = 0, num = -1;

        for (const auto& i: freqMap) {
            if ((i.first & 1) == 0 && i.second > maxFreq) {
                maxFreq = i.second;
                num = i.first;
            }
        }

        return num;
    }
};
