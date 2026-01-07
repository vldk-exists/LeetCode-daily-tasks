/*
Given a list of dominoes, dominoes[i] = [a, b] is equivalent to dominoes[j] = [c, d] if and only if either (a == c and b == d), or (a == d and b == c) - that is, one domino can be rotated to be equal to another domino.

Return the number of pairs (i, j) for which 0 <= i < j < dominoes.length, and dominoes[i] is equivalent to dominoes[j].
*/

class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& dominoes) {
        vector<int> num(100);
        int count = 0;
        for (const vector<int>& i: dominoes) {
            int value = min(i[0], i[1])*10+max(i[0],i[1]);
            count += num[value];
            num[value]++;
        }

        return count;
    }
};
