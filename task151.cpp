/*
The Hamming distance between two integers is the number of positions at which the corresponding bits are different.

Given two integers x and y, return the Hamming distance between them.
*/

class Solution {
public:
    int hammingDistance(uint32_t x, uint32_t y) {
        uint32_t size = 1, count = 0;
            
        uint32_t c = std::max(x, y); 
        
        while (c >= size) {
            size *= 2;
        }
            
        for (uint32_t i = 1; i < size;) {
            bool a = (x&i) > 0;
            bool b = (y&i) > 0;
            
            if (a != b) count++;
            
            i *= 2;
        }

        return count;
    }
};
