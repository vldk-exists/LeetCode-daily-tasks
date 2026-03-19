/*
A bit flip of a number x is choosing a bit in the binary representation of x and flipping it from either 0 to 1 or 1 to 0.

    - For example, for x = 7, the binary representation is 111 and we may choose any bit (including any leading zeros not shown) and flip it. We can flip the first bit from the right to get 110, flip the second bit from the right to get 101, flip the fifth bit from the right (a leading zero) to get 10111, etc.

Given two integers start and goal, return the minimum number of bit flips to convert start to goal.
*/

class Solution {
public:
    int minBitFlips(uint32_t start, uint32_t goal) {
        uint32_t size = 1, count = 0;
            
        uint32_t c = std::max(start, goal); 
        
        while (c >= size) {
            size *= 2;
        }
            
        for (uint32_t i = 1; i < size;) {
            bool a = (start&i) > 0;
            bool b = (goal&i) > 0;
            
            if (a != b) count++;
            
            i *= 2;
        }

        return count;
    }
};
