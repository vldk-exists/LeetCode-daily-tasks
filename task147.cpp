/*
Given an array of points on the X-Y plane points where points[i] = [xi, yi], return the area of the largest triangle that can be formed by any three different points. Answers within 10-5 of the actual answer will be accepted.
*/

class Solution {
public:
    double largestTriangleArea(vector<vector<int>>& points) {
        double maxArea = 0.0;

        for (int a = 0; a < points.size()-2; a++) {
            for (int b = 0; b < points.size()-1; b++) {
                for (int c = 0; c < points.size(); c++) {
                    double x1 = (double)(points[a][0]);
                    double x2 = (double)(points[b][0]);
                    double x3 = (double)(points[c][0]);

                    double y1 = (double)(points[a][1]);
                    double y2 = (double)(points[b][1]);
                    double y3 = (double)(points[c][1]);

                    double area = abs(x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2)) / 2.0;

                    maxArea = max(maxArea, area);
                }
            }
        }

        return maxArea;
    }
};
