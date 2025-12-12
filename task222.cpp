/*
Given a string text, you want to use the characters of text to form as many instances of the word "balloon" as possible.

You can use each character in text at most once. Return the maximum number of instances that can be formed.
*/

unordered_map<char, int> balloonFreq = {
    {'b', 1},
    {'a', 1},
    {'l', 2},
    {'o', 2},
    {'n', 1}
};

class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char, int> freqMap;
        
        for (const char& i: text) freqMap[i]++;

        int minVal = INT_MAX;

        for (const auto& i: balloonFreq) {
            if (freqMap.find(i.first) == freqMap.end() || freqMap[i.first] < i.second) return 0;
            minVal = min(minVal, freqMap[i.first] / i.second);
        }

        return minVal;
    }
};
