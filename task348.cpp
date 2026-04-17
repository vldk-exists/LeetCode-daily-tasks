/*
Given n points on a 2D plane where points[i] = [xi, yi], Return the widest vertical area between two points such that no points are inside the area.

A vertical area is an area of fixed-width extending infinitely along the y-axis (i.e., infinite height). The widest vertical area is the one with the maximum width.

Note that points on the edge of a vertical area are not considered included in the area.
*/

class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        vector<int> x;
        for (const vector<int>& i: points) x.push_back(i[0]);
        
        sort(x.begin(), x.end());

        int maxWidth = 0;
        for (int i = 0; i < x.size()-1; ++i) 
            maxWidth = max(maxWidth, abs(x[i]-x[i+1]));

        return maxWidth;
    }
};
