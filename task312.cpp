/*
Alice and Bob are traveling to Rome for separate business meetings.

You are given 4 strings arriveAlice, leaveAlice, arriveBob, and leaveBob. Alice will be in the city from the dates arriveAlice to leaveAlice (inclusive), while Bob will be in the city from the dates arriveBob to leaveBob (inclusive). Each will be a 5-character string in the format "MM-DD", corresponding to the month and day of the date.

Return the total number of days that Alice and Bob are in Rome together.

You can assume that all dates occur in the same calendar year, which is not a leap year. Note that the number of days per month can be represented as: [31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31].
*/

const vector<int> MD = {
    31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31
};

set<string> getDates(const string& start, const string& end) {
    set<string> dates;

    int startDays = stoi(start.substr(3, 2));
    int startMonths = stoi(start.substr(0, 2));

    int endDays = stoi(end.substr(3, 2));
    int endMonths = stoi(end.substr(0, 2));

    while (!(startDays == endDays && startMonths == endMonths)) {
        dates.insert(to_string(startMonths) + "-" + to_string(startDays));

        if (startDays == MD[startMonths-1]) {
            startDays = 1;
            ++startMonths;
        } else ++startDays;
    }

    dates.insert(to_string(startMonths) + "-" + to_string(startDays));

    return dates;
}

class Solution {
public:
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        set<string> a1 = getDates(arriveAlice, leaveAlice);
        set<string> a2 = getDates(arriveBob, leaveBob);
        set<string> result;

        std::set_intersection(
            a1.begin(),a1.end(),         
            a2.begin(), a2.end(),   
            std::inserter(result, result.begin())
        );

        return result.size();
    }
};
