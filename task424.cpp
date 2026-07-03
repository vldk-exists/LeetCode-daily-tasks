/*
You are given two integers red and blue representing the count of red and blue colored balls. You have to arrange these balls to form a triangle such that the 1st row will have 1 ball, the 2nd row will have 2 balls, the 3rd row will have 3 balls, and so on.

All the balls in a particular row should be the same color, and adjacent rows should have different colors.

Return the maximum height of the triangle that can be achieved.
*/

class Solution {
public:
    int getHeight(int red, int blue, bool color) {
        int height = 0;
        int c = 1;

        while (1) {
            if (color) {
                if (red < c) break;
                red -= c;
            }
            else {
                if (blue < c) break;
                blue -= c;
            }

            color = !color;
            ++height;
            ++c;
        }

        return height;
    }

    int maxHeightOfTriangle(int red, int blue) {
        return max(getHeight(red, blue, true), getHeight(red, blue, false));
    }
};
