/*
You are given two strings current and correct representing two 24-hour times.

24-hour times are formatted as "HH:MM", where HH is between 00 and 23, and MM is between 00 and 59. The earliest 24-hour time is 00:00, and the latest is 23:59.

In one operation you can increase the time current by 1, 5, 15, or 60 minutes. You can perform this operation any number of times.

Return the minimum number of operations needed to convert current to correct.
*/

class Solution {
public:
    int convertTime(string current, string correct) {
        int currentMinutes, currentHours, correctMinutes, correctHours;

        currentHours = (current[0] - '0') * 10 + (current[1] - '0');
        currentMinutes = (current[3] - '0') * 10 + (current[4] - '0');

        correctHours = (correct[0] - '0') * 10 + (correct[1] - '0');
        correctMinutes = (correct[3] - '0') * 10 + (correct[4] - '0');

        int currentValue = currentHours*60+currentMinutes;
        int correctValue = correctHours*60+correctMinutes;

        int count = 0, difference = correctValue-currentValue;

        while (difference > 0) {
            if (difference >= 60) difference -= 60;
            else if (difference >= 15) difference -= 15;
            else if (difference >= 5) difference -= 5;
            else if (difference >= 1) difference -= 1;
            count++;
        }

        return count;
    }
};
