/*
You are given a 2D integer array tasks where tasks[i] = [si, ti].

Each [si, ti] in tasks represents a task with start time si that takes ti units of time to finish.

Return the earliest time at which at least one task is finished.
*/

class Solution {
public:
    int earliestTime(vector<vector<int>>& tasks) {
        int result = INT_MAX;
        for (vector<int>& i: tasks) result = min(result, i[0]+i[1]);

        return result;
    }
};
