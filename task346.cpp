/*
You are given a 0-indexed circular string array words and a string target. A circular array means that the array's end connects to the array's beginning.

    - Formally, the next element of words[i] is words[(i + 1) % n] and the previous element of words[i] is words[(i - 1 + n) % n], where n is the length of words.

Starting from startIndex, you can move to either the next word or the previous word with 1 step at a time.

Return the shortest distance needed to reach the string target. If the string target does not exist in words, return -1.
*/

class Solution {
public:
    int closestTarget(vector<string>& words, string target, int startIndex) {
        if (words[startIndex] == target) return 0;

        const int n = words.size();

        int shortestDistance = INT_MAX;

        for (int i = 1; i < n; ++i) {
            if (words[(startIndex + i) % n] == target) {
                shortestDistance = min(shortestDistance, i);
                break;
            }
        }

        for (int i = 1; i < n; ++i) {
            if (words[(startIndex - i + n) % n] == target) {
                shortestDistance = min(shortestDistance, i);
                break;
            }
        }

        if (shortestDistance == INT_MAX) return -1;
        return shortestDistance;
    }
};
