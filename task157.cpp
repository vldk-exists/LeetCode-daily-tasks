/*
You are given two arrays of strings that represent two inclusive events that happened on the same day, event1 and event2, where:

    event1 = [startTime1, endTime1] and
    event2 = [startTime2, endTime2].

Event times are valid 24 hours format in the form of HH:MM.

A conflict happens when two events have some non-empty intersection (i.e., some moment is common to both events).

Return true if there is a conflict between two events. Otherwise, return false.
*/

class Solution {
public:
    int f(string time) {
        string hoursStr = time.substr(0, 2);
        string minutesStr = time.substr(3, 2);

        int hoursInt = 0;
        int minutesInt = 0;

        hoursInt = (int)(hoursStr[0] - '0') * 10 + (int)(hoursStr[1]-'0');
        minutesInt = (int)(minutesStr[0] - '0') * 10 + (int)(minutesStr[1]-'0');

        return hoursInt*60 + minutesInt;
    }

    bool haveConflict(vector<string>& event1, vector<string>& event2) {
        int a = f(event1[0]);
        int b = f(event1[1]);

        int c = f(event2[0]);
        int d = f(event2[1]);

        if (a < d) return c <= b;
        return a == d;
    }
};
