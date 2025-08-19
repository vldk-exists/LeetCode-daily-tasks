/*
You are given an array nums consisting of positive integers.

Return the total frequencies of elements in nums such that those elements all have the maximum frequency.

The frequency of an element is the number of occurrences of that element in the array.
*/

class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int count = 0;
        unordered_map<int, int> a;

        for (const int &i: nums) {
            if (a.find(i) != a.end()) a[i]++;
            else a[i] = 1;
        }

        int maxFreq = 0;
        for (const auto &j: a) {
            if (j.second > maxFreq) {
                maxFreq = j.second;
                count = j.second;
            } else if (j.second == maxFreq) count += j.second;
        }

        return count;
    }
};
