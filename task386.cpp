/*
You are given a string array words and a binary array groups both of length n.

A subsequence of words is alternating if for any two consecutive strings in the sequence, their corresponding elements at the same indices in groups are different (that is, there cannot be consecutive 0 or 1).

Your task is to select the longest alternating subsequence from words.

Return the selected subsequence. If there are multiple answers, return any of them.

Note: The elements in words are distinct.
*/

class Solution {
public:
    vector<string> getLongestSubsequence(vector<string>& words, vector<int>& groups) {
        vector<string> a = {words[0]};
        vector<int> b = {groups[0]};
        for (int i = 1; i < words.size(); ++i) {
            if (groups[i] != b.back()) {
                a.push_back(words[i]);
                b.push_back(groups[i]);
            }
        }

        return a;
    }
};
