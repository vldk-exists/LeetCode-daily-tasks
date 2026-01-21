/*
There are n employees, each with a unique id from 0 to n - 1.

You are given a 2D integer array logs where logs[i] = [idi, leaveTimei] where:

    - id_i is the id of the employee that worked on the ith task, and
    - leaveTime_i is the time at which the employee finished the ith task. All the values leaveTimei are unique.

Note that the ith task starts the moment right after the (i - 1)th task ends, and the 0th task starts at time 0.

Return the id of the employee that worked the task with the longest time. If there is a tie between two or more employees, return the smallest id among them.
*/

class Solution {
public:
    int hardestWorker(int n, vector<vector<int>>& logs) {
        int timeEnded = 0;
        int resultId = 0;
        int longestTime = 0;

        for (const vector<int>& i: logs) {
            int time = abs(i[1]-timeEnded);

            if (time > longestTime) {
                longestTime = time;
                resultId = i[0];
            } else if (time == longestTime) resultId = min(resultId, i[0]);

            timeEnded = i[1];
        }

        return resultId;
    }
};
