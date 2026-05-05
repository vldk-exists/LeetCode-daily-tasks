/*

		/1 year anniversary!/

Tic-tac-toe is played by two players A and B on a 3 x 3 grid. The rules of Tic-Tac-Toe are:

    - Players take turns placing characters into empty squares ' '.
    - The first player A always places 'X' characters, while the second player B always places 'O' characters.
    - 'X' and 'O' characters are always placed into empty squares, never on filled ones.
    - The game ends when there are three of the same (non-empty) character filling any row, column, or diagonal.
    - The game also ends if all squares are non-empty.
    - No more moves can be played if the game is over.

Given a 2D integer array moves where moves[i] = [rowi, coli] indicates that the ith move will be played on grid[rowi][coli]. return the winner of the game if it exists (A or B). In case the game ends in a draw return "Draw". If there are still movements to play return "Pending".

You can assume that moves is valid (i.e., it follows the rules of Tic-Tac-Toe), the grid is initially empty, and A will play first.
*/

#define DIAG_1 (grid[0][0] == grid[1][1] && grid[1][1] == grid[2][2])
#define DIAG_2 (grid[2][0] == grid[1][1] && grid[1][1] == grid[0][2])

class Solution {
public:
    string tictactoe(vector<vector<int>>& moves) {
        vector<vector<string>> grid(3, vector<string>(3, " "));

        char move = 'A';
        for (const vector<int> point: moves) {
            grid[point[0]][point[1]] = move;
            
            move = move == 'A' ? 'B' : 'A';
        }

        for (int i = 0; i < 3; ++i) {
            if (grid[i][0] == grid[i][1] && grid[i][1] == grid[i][2] && grid[i][0] != " ")
                return grid[i][0]; 
        }

        for (int i = 0; i < 3; ++i) {
            if (grid[0][i] == grid[1][i] && grid[1][i] == grid[2][i] && grid[0][i] != " ")
                return grid[0][i]; 
        }

        if ((DIAG_1 || DIAG_2) && grid[1][1] != " ") 
            return grid[1][1];

        if (moves.size() == 9) return "Draw";

        return "Pending";
    }
};
