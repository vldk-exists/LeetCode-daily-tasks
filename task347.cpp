/*
You are given an array bulbs of integers between 1 and 100.

There are 100 light bulbs numbered from 1 to 100. All of them are switched off initially.

For each element bulbs[i] in the array bulbs:

    - If the bulbs[i]th light bulb is currently off, switch it on.
    - Otherwise, switch it off.

Return the list of integers denoting the light bulbs that are on in the end, sorted in ascending order. If no bulb is on, return an empty list.
*/

class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& bulbs) {
        set<int> on;
        for (const int& i: bulbs) {
            if (on.find(i) == on.end()) on.insert(i);
            else on.erase(i);
        }

        return vector<int>(on.begin(), on.end());
    }
};
