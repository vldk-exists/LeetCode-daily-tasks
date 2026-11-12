/*
You are given an 8 x 8 matrix representing a chessboard. There is exactly one white rook represented by 'R', some number of white bishops 'B', and some number of black pawns 'p'. Empty squares are represented by '.'.

A rook can move any number of squares horizontally or vertically (up, down, left, right) until it reaches another piece or the edge of the board. A rook is attacking a pawn if it can move to the pawn's square in one move.

Note: A rook cannot move through other pieces, such as bishops or pawns. This means a rook cannot attack a pawn if there is another piece blocking the path.

Return the number of pawns the white rook is attacking.
*/

class Solution {
public:
    int numRookCaptures(vector<vector<char>>& b) {
        int R_i = -1;
        int R_j = -1;
        
        for (int i = 0; i < 8; ++i) {
            for (int j = 0; j < 8; ++j) {
                if (b[i][j] == 'R') {
                    R_i = i;
                    R_j = j;
                    break;
                }
            }
        }

        int pawns = 0;

        // up
        
        for (int i = R_i-1; i >= 0; --i) {
            if (b[i][R_j] == 'B') break;
            if (b[i][R_j] == 'p') {
                ++pawns;
                break;
            }
        }

        // down
        for (int i = R_i+1; i < 8; ++i) {
            if (b[i][R_j] == 'B') break;
            if (b[i][R_j] == 'p') {
                ++pawns;
                break;
            }
        }

        // left
        for (int j = R_j-1; j >= 0; --j) {
            if (b[R_i][j] == 'B') break;
            if (b[R_i][j] == 'p') {
                ++pawns;
                break;
            }
        }

        // right
        for (int j = R_j+1; j < 8; ++j) {
            if (b[R_i][j] == 'B') break;
            if (b[R_i][j] == 'p') {
                ++pawns;
                break;
            }
        }

        return pawns;
    }
};
