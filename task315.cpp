/*
Given a positive integer n, return the smallest positive integer that is a multiple of both 2 and n.
*/

int GCD(int a, int b) {
    while (a > 0 && b > 0) {
        if (a > b) a -= b;
        else b -= a;
    } 
    
    if (a == 0) return b;
    return a;
}

class Solution {
public:
    int smallestEvenMultiple(int n) {
        return abs(2*n)/GCD(2, n);
    }
};
