/*
You are given a 0-indexed 2D integer array nums representing the coordinates of the cars parking on a number line. For any index i, nums[i] = [starti, endi] where starti is the starting point of the ith car and endi is the ending point of the ith car.

Return the number of integer points on the line that are covered with any part of a car.
*/

class Solution {
public:
    int numberOfPoints(vector<vector<int>>& nums) {
        set<int> points;

        for (vector<int> num: nums) {
            int start = num[0];
            int end = num[1];

            for (int i = start; i <= end; i++) {
                points.insert(i);
            }
        }

        return points.size();
    }
};
