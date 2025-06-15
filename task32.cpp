/*
Given an integer array nums of 2n integers, group these integers into n pairs (a1, b1), (a2, b2), ..., (an, bn) such that the sum of min(ai, bi) for all i is maximized. Return the maximized sum.
*/

class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        vector<vector<int>> pairs = {{}};
        int pair_index = 0;
        for (int num: nums) {
            if (pairs[pair_index].size() == 2) {
                pairs.push_back({});
                pair_index++;
            }
            pairs[pair_index].push_back(num);
        }

        vector<int> values;
        for (vector<int> pair: pairs) {
            values.push_back(*min_element(pair.begin(), pair.end()));
        }

        return accumulate(values.begin(), values.end(), 0);
    }
};
