/*
You are given a string s consisting of lowercase English letters, and an integer k.

Your task is to delete some (possibly none) of the characters in the string so that the number of distinct characters in the resulting string is at most k.

Return the minimum number of deletions required to achieve this.
*/

class Solution {
public:
    int minDeletion(string s, int k) {
        map<int, int> m; 
        for (const char& i: s) ++m[i];

        int count = 0;

        while (m.size() > k) {
            char c;
            int f = 17;
            for (const auto& [i, j] : m) {
                if (j < f) {
                    c = i;
                    f = j;
                }
            }

            count += f;
            m.erase(c);
        }

        return count;
    }
};
