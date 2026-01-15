/*
You are given a 0-indexed integer array nums. In one operation, you may do the following:

    - Choose two integers in nums that are equal.
    - Remove both integers from nums, forming a pair.

The operation is done on nums as many times as possible.

Return a 0-indexed integer array answer of size 2 where answer[0] is the number of pairs that are formed and answer[1] is the number of leftover integers in nums after doing the operation as many times as possible.
*/

class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        stack<int> s;

        int pairs = 0;
        for (const int& i: nums) {
            if (s.empty()) s.push(i);
            else {
                if (s.top() == i) {
                    s.pop();
                    pairs++;
                } else s.push(i);
            }
        }

        int leftover = s.size();

        return {pairs, leftover};
    }
};
