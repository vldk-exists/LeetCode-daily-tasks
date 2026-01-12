/*
On a 2D plane, there are n points with integer coordinates points[i] = [xi, yi]. Return the minimum time in seconds to visit all the points in the order given by points.

You can move according to these rules:

    - In 1 second, you can either:
        -- move vertically by one unit,
        -- move horizontally by one unit, or
        -- move diagonally sqrt(2) units (in other words, move one unit vertically then one unit horizontally in 1 second).

    - You have to visit the points in the same order as they appear in the array.

    - You are allowed to pass through points that appear later in the order, but these do not count as visits.
*/

class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        const int n = points.size();
        int time = 0;

        for (int i = 0; i < n-1; i++) {
            const auto& A = points[i];
            const auto& B = points[i+1];

            int x1 = A[0];
            int x2 = B[0];

            int y1 = A[1];
            int y2 = B[1];

            int dx = abs(x1-x2);
            int dy = abs(y1-y2);

            time += max(dx, dy);
        }

        return time;
    }
};
