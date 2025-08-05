/*
You are given a string s consisting of lowercase English letters.

Your task is to find the maximum difference diff = freq(a1) - freq(a2) between the frequency of characters a1 and a2 in the string such that:

    - a1 has an odd frequency in the string.
    - a2 has an even frequency in the string.

Return this maximum difference.
*/

class Solution {
public:
    int maxDifference(string s) {
        unordered_map<char, int> a; 

        for (char i: s) {
            if (a.find(i) != a.end()) a[i]++;
            else a[i] = 1;
        }

        int max_frequency = 0, min_frequency = INT_MAX;

        for (const auto& i: a) {
            if ((i.second & 1) == 0) {
                if (i.second < min_frequency) min_frequency = i.second;
            } else {
                if (i.second > max_frequency) max_frequency = i.second;
            }
        }

        return max_frequency - min_frequency;
    }
};
