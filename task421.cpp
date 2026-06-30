/*
You are given an integer n.

The score of n is defined as the sum of d * freq(d) over all distinct digits d, where freq(d) denotes the number of times the digit d appears in n.

Return an integer denoting the score of n.
*/

class Solution {
public:
    int digitFrequencyScore(int n) {
        int score = 0;
        while (n > 0) {
            score += n % 10;
            n /= 10;
        }

        return score;
    }
};
