/*
You are given two categories of theme park attractions: land rides and water rides.

    - Land rides
        -- landStartTime[i] – the earliest time the ith land ride can be boarded.
        -- landDuration[i] – how long the ith land ride lasts.
    - Water rides
        -- waterStartTime[j] – the earliest time the jth water ride can be boarded.
        -- waterDuration[j] – how long the jth water ride lasts.

A tourist must experience exactly one ride from each category, in either order.

    - A ride may be started at its opening time or any later moment.
    - If a ride is started at time t, it finishes at time t + duration.
    - Immediately after finishing one ride the tourist may board the other (if it is already open) or wait until it opens.

Return the earliest possible time at which the tourist can finish both rides.
*/

class Solution {
public:
    int earliestFinishTime(vector<int>& a1, vector<int>& a2, vector<int>& b1, vector<int>& b2) {
        int r = INT_MAX;

        for (int i = 0; i < a1.size(); ++i) {
            for (int j = 0; j < b1.size(); ++j) {
                int t = a1[i] + a2[i];

                if (t >= b1[j]) t += b2[j];
                else t += (b1[j]-t) + b2[j];

                r = min(t, r);
            }
        }

        for (int i = 0; i < b1.size(); ++i) {
            for (int j = 0; j < a1.size(); ++j) {
                int t = b1[i] + b2[i];

                if (t >= a1[j]) t += a2[j];
                else t += (a1[j]-t) + a2[j];

                r = min(t, r);
            }
        }

        return r;
    }
};
