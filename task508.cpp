/*
You are given two integer arrays nums and divisors.

The divisibility score of divisors[i] is the number of indices j such that nums[j] is divisible by divisors[i].

Return the integer divisors[i] with the maximum divisibility score. If multiple integers have the maximum score, return the smallest one.
*/

class Solution {
public:
    int maxDivScore(vector<int>& nums, vector<int>& divisors) {
        int maxScore = 0;
        int result = divisors[0];

        for (const int& i: divisors) {
            int score = 0;
            for (const int& j: nums) {
                if (j % i == 0) ++score;
            }

            if (score > maxScore) {
                maxScore = score;
                result = i;
            } else if (score == maxScore) {
                if (result > i)
                    result = i;
            }
        }

        return result;
    }
};
