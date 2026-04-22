/*
You are given a string s. Simulate events at each second i:

    - If s[i] == 'E', a person enters the waiting room and takes one of the chairs in it.
    - If s[i] == 'L', a person leaves the waiting room, freeing up a chair.

Return the minimum number of chairs needed so that a chair is available for every person who enters the waiting room given that it is initially empty.
*/

class Solution {
public:
    int minimumChairs(string s) {
        int maxChairs = 0;
        int chairs = 0;

        for (const char& i: s) {
            if (i == 'E') ++chairs;
            else --chairs;
            maxChairs = max(maxChairs, chairs);
        }

        return maxChairs;
    }
};
