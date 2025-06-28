/*
Reverse bits of a given 32 bits unsigned integer.
*/

#include <bitset>

class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        string binary = bitset<32>(n).to_string();
        reverse(binary.begin(), binary.end());
        unsigned long decimal = bitset<32>(binary).to_ulong();
        return decimal;
    }
};
