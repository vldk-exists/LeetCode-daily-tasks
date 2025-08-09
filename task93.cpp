/*
Given an array of integers arr, a lucky integer is an integer that has a frequency in the array equal to its value.

Return the largest lucky integer in the array. If there is no lucky integer return -1.
*/

class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int, int> numbersMap;

        for (int i: arr) {
            if (numbersMap.find(i) != numbersMap.end()) numbersMap[i]++;
            else numbersMap[i] = 1;
        }

        int maxLuckyNumber = -1;

        if (!numbersMap.empty()) {
            for (const auto pair: numbersMap) {
                if (pair.first == pair.second) {
                    if (pair.first > maxLuckyNumber) maxLuckyNumber = pair.first;
                }
            }
        }
        return maxLuckyNumber;
    }
};
