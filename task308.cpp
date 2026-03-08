/*
Given a string s and a character c that occurs in s, return an array of integers answer where answer.length == s.length and answer[i] is the distance from index i to the closest occurrence of character c in s.

The distance between two indices i and j is abs(i - j), where abs is the absolute value function.
*/

class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        set<int> occurence;

        for (int i = 0; i < s.length(); ++i) {
            if (s[i] == c) occurence.insert(i);
        }

        vector<int> result;
        for (int i = 0; i < s.length(); ++i) {
            if (s[i] != c) {
                int minDist = INT_MAX;
                for (const int& j: occurence) {
                    minDist = min(minDist, abs(i-j));
                }

                result.push_back(minDist);
            } else result.push_back(0);
        }

        return result;
    }
};
