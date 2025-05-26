/*
You are given two strings, coordinate1 and coordinate2, representing the coordinates of a square on an 8 x 8 chessboard.

Below is the chessboard for reference.

Return true if these two squares have the same color and false otherwise.

The coordinate will always represent a valid chessboard square. The coordinate will always have the letter first (indicating its column), and the number second (indicating its row).
*/

class Solution {
public:
    bool checkTwoChessboards(string a, string b) {
        return (a[0] + a[1] + b[0] + b[1])%2 == 0;
    }
};
