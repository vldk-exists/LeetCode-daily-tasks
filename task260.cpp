/*
Write a program to count the number of days between two dates.

The two dates are given as strings, their format is YYYY-MM-DD as shown in the examples.
*/

const int monthes[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

class Solution {
public:
    bool ifLeapYear(int year) {
        return ((year % 4 == 0) && ((year % 100 != 0) || (year % 400 == 0)));
    }

    int f(string date) {
        int year = stoi(date.substr(0, 4));
        int month = stoi(date.substr(5, 2));
        int day = stoi(date.substr(8, 2));
        
        int days = 0;
        
        for (int i = 1900; i < year; i++) {
            if (ifLeapYear(i)) days += 366;
            else days += 365;
        }
        
        for (int i = 0; i < month-1; i ++) {
            if (i == 1 && ifLeapYear(year)) days += monthes[i]+1;
            else days += monthes[i];
        }
        
        days += day;
        
        return days;
    }

    int daysBetweenDates(string date1, string date2) {
        return abs(f(date1) - f(date2));
    }
};
