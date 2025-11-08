/*
There are n people in a line queuing to buy tickets, where the 0th person is at the front of the line and the (n - 1)th person is at the back of the line.

You are given a 0-indexed integer array tickets of length n where the number of tickets that the ith person would like to buy is tickets[i].

Each person takes exactly 1 second to buy a ticket. A person can only buy 1 ticket at a time and has to go back to the end of the line (which happens instantaneously) in order to buy more tickets. If a person does not have any tickets left to buy, the person will leave the line.

Return the time taken for the person initially at position k (0-indexed) to finish buying tickets.
*/

class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        deque<int> d(tickets.begin(), tickets.end());

        int time = 0;

        while (!d.empty()) {
            if (k == 0 && d[k] == 1) break;

            int front = d.front();
            if (d.front() > 1) {
                int front = d.front();
                d.pop_front();
                d.push_back(front-1);
            } else d.pop_front();

            if (k == 0) k = d.size()-1;
            else k--;

            time++;
        }

        return time+1;
    }
};
