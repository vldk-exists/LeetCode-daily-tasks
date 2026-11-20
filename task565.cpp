/*
You are given an integer array coordinates, coordinates[i] = [x, y], where [x, y] represents the coordinate of a point. Check if these points make a straight line in the XY plane.
*/

class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& c) {
        // sort(c.begin(), c.end());

        // int d_x = c[0][0] - c[1][0];
        // int d_y = c[0][1] - c[1][1];

        // if (d_x == 0) {
        //     int x_excepted = c[0][0];
           
        //     for (int i = 0; i < c.size(); ++i) {
        //         int x = c[i][0];
        //         if (x_excepted != x) return false;
        //     }
        // } else {
        //     double k = d_y/(double)d_x;
        //     int C = c[0][1] - k * c[0][0];

        //     // y = k*x + C

        //     for (int i = 1; i < c.size(); ++i) {
        //         int x = c[i][0];
        //         int y = c[i][1];

        //         int res = k*(double)x + C;

        //         if (y != res) return false;
        //     }
        // }

        // return true;

        int x = c[0][0] - c[1][0];
        int y = c[0][1] - c[1][1];

        for (int i = 2; i < c.size(); ++i) {
            int c_x = c[i][0] - c[i-1][0];
            int c_y = c[i][1] - c[i-1][1];

            if (c_x*y != c_y*x) return false;
        }

        return true;
    }
};
