/*
You are given a 2D integer array ranges and two integers left and right. Each ranges[i] = [starti, endi] represents an inclusive interval between starti and endi.

Return true if each integer in the inclusive range [left, right] is covered by at least one interval in ranges. Return false otherwise.

An integer x is covered by an interval ranges[i] = [starti, endi] if starti <= x <= endi.
*/

class Solution {
public:
    bool isCovered(vector<vector<int>>& ranges, int left, int right) {
        for (int i = left; i <= right; ++i) {
            bool isChecked = false;
            for (int j = 0; j < ranges.size(); ++j) {
                if (i >= ranges[j][0] && i <= ranges[j][1]) {
                    isChecked = true;
                    break;
                }
            }

            if (!isChecked) return false;
        }

        return true;
    }
};
