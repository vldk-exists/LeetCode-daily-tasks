/*
You are given an array of integers stones where stones[i] is the weight of the ith stone.

We are playing a game with the stones. On each turn, we choose the heaviest two stones and smash them together. Suppose the heaviest two stones have weights x and y with x <= y. The result of this smash is:

    - If x == y, both stones are destroyed, and
    - If x != y, the stone of weight x is destroyed, and the stone of weight y has new weight y - x.

At the end of the game, there is at most one stone left.

Return the weight of the last remaining stone. If there are no stones left, return 0.
*/

class Solution {
public:
    int lastStoneWeight(vector<int>& s) {
        
        while (s.size() >= 2) {
            sort(s.begin(), s.end());

            int x = s.back(); s.pop_back();
            int y = s.back(); s.pop_back();

            if (x > y) 
                s.push_back(x-y);
        }

        if (s.size() == 0) return 0;

        return s[s.size()-1];

    }
};
