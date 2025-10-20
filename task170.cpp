/*
There is a programming language with only four operations and one variable X:

    ++X and X++ increments the value of the variable X by 1.
    --X and X-- decrements the value of the variable X by 1.

Initially, the value of X is 0.

Given an array of strings operations containing a list of operations, return the final value of X after performing all the operations.
*/

const string m1 = "--X", m2 = "X--";
const string p1 = "++X", p2 = "X++";

class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int res = 0;
        
        for (const string& operation: operations) {
            if (operation == m1 || operation == m2) res--;
            else res++;
        }

        return res;
    }
};
