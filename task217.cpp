/*
Given two non-negative integers low and high. Return the count of odd numbers between low and high (inclusive).
*/

class Solution {
public:
    int countOdds(int low, int high) {  
        int count = (high-low) / 2;
        if (low % 2 != 0) count++;
        if (high % 2 != 0 && low % 2 == 0) count++;
        return count; 
    }
};
