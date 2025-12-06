/*
Given an array of integers arr, return true if the number of occurrences of each value in the array is unique or false otherwise.
*/

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> freqMap;
        for (const int& i: arr) {
            freqMap[i]++;
        }

        for (const auto& i: freqMap) {
            if (freqOccur.find(i.second) != freqOccur.end()) return false;
            else freqOccur.insert(i.second);
        }

        return true;
    }
};
