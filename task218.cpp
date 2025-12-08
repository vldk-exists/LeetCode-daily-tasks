/*
A square triple (a,b,c) is a triple where a, b, and c are integers and a**2 + b**2 = c**2.

Given an integer n, return the number of square triples such that 1 <= a, b, c <= n.
*/

class Solution {
public:
    int countTriples(int n) {
        int count = 0;

        for (int i = 1; i <= n; i++) {
            int target = i*i;
            int left = 1, right = i-1;

            while (left < right) {
                int sum = left*left + right*right;

                if (sum == target) {
                    count += 2;
                    right--;
                    left++;
                } else if (sum < target) left++;
                else right--;
            }
        }

        return count;
    }
};
