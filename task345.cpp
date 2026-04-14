/*
You are given a 2D matrix grid of size 3 x 3 consisting only of characters 'B' and 'W'. Character 'W' represents the white color, and character 'B' represents the black color.

Your task is to change the color of at most one cell so that the matrix has a 2 x 2 square where all cells are of the same color.

Return true if it is possible to create a 2 x 2 square of the same color, otherwise, return false.
*/

const vector<vector<int>> a = {
    {0,0,  0,1,  1,0,  1,1},
    {0,1,  0,2,  1,1,  1,2},

    {1,0,  1,1,  2,0,  2,1},
    {1,1,  1,2,  2,1,  2,2},
};

class Solution {
public:
    bool canMakeSquare(vector<vector<char>>& grid) {
        for (const vector<int> r: a) {
            int b = 0;
            int w = 0;
            for (int i = 0; i < r.size(); i+=2) {
                if (grid[r[i]][r[i+1]] == 'B') ++b;
                else ++w;
            }
            if (b >= 3 || w >= 3) return true;
        }

        return false;
    }
};
