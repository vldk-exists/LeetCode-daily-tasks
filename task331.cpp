/*
There is a circle of red and blue tiles. You are given an array of integers colors. The color of tile i is represented by colors[i]:

    - colors[i] == 0 means that tile i is red.
    - colors[i] == 1 means that tile i is blue.

Every 3 contiguous tiles in the circle with alternating colors (the middle tile has a different color from its left and right tiles) is called an alternating group.

Return the number of alternating groups.

Note that since colors represents a circle, the first and the last tiles are considered to be next to each other.
*/

class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors) {
        const int n = colors.size();
        int count = 0;

        for (int i = 0; i < n; ++i) {
            int a, b, c;
            
            if (i == 0) {
                a = colors[n-1];
                c = colors[i+1];
            } else if (i == n-1) {
                a = colors[i-1];
                c = colors[0];
            } else {
                a = colors[i-1];
                c = colors[i+1];
            }

            b = colors[i];

            if (a == c && b != a) ++count;
        }

        return count;
    }
};
