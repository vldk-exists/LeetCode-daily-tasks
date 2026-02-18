/*
Given a positive integer, check whether it has alternating bits: namely, if two adjacent bits will always have different values.
*/

class Solution {
public:
    bool hasAlternatingBits(int n) {
        bool prev = n & 1; n >>= 1;
        
        for (; n > 0;) {
            bool curr = n & 1;
            if (prev == curr) return false;
            prev = curr;
            n >>= 1;
        }

        return true;
    }
};
