/*
Given a positive integer n, find and return the longest distance between any two adjacent 1's in the binary representation of n. If there are no two adjacent 1's, return 0.

Two 1's are adjacent if there are only 0's separating them (possibly no 0's). The distance between two 1's is the absolute difference between their bit positions. For example, the two 1's in "1001" have a distance of 3.
*/

class Solution {
public:
    int binaryGap(int n) {
        vector<int> indices;

        for (int i = 0; n > 0; i++) {
            if ((n & 1) > 0) indices.push_back(i);
            n >>= 1;
        }

        int maxDiff = 0;
        for (int i = indices.size()-1; i >= 1; i--) {
            maxDiff = max(maxDiff, indices[i]-indices[i-1]);
        }

        return maxDiff;
    }
};
