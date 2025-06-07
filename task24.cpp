/*
Write a function that reverses a string. The input string is given as an array of characters s.

You must do this by modifying the input array in-place with O(1) extra memory.
*/

class Solution {
public:
    void reverseString(vector<char>& s) {
        int i = 0, j = s.size() -1;
        while (i < j) {
            char k = s[i];
            s[i] = s[j];
            s[j] = k;
            i++;
            j--;
        }
    }
};
