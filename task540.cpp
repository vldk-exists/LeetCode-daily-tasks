/*
You are given a 0-indexed integer array nums and an integer k.

Return an integer that denotes the sum of elements in nums whose corresponding indices have exactly k set bits in their binary representation.

The set bits in an integer are the 1's present when it is written in binary.

    - For example, the binary representation of 21 is 10101, which has 3 set bits.

*/

class Solution {
public:
    int countSetBits(int x) {
        int count = 0;
        
        for (; x > 0 ;) {
            x = x & (x-1);
            ++count;
        }

        return count;
    }

    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int result = 0;
        
        for (int i = 0; i < nums.size(); ++i) {
            if (countSetBits(i) == k)
                result += nums[i];
        }

        return result;
    }
};
