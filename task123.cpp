/*
You are given coordinates, a string that represents the coordinates of a square of the chessboard. Below is a chessboard for your reference.

Return true if the square is white, and false if the square is black.

The coordinate will always represent a valid chessboard square. The coordinate will always have the letter first, and the number second.
*/

class Solution {
public:
    bool squareIsWhite(string coordinates) {
        int a = coordinates[0]-'a';
        int b = coordinates[1]-'0';

        bool c = (a & 1) == 0;
        bool d = (b & 1) == 0;

        if ((c && d) || (!c && !d)) return true;
        return false;
    }
};
