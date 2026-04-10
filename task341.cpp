/*
You are given an integer array nums.

A tuple (i, j, k) of 3 distinct indices is good if nums[i] == nums[j] == nums[k].

The distance of a good tuple is abs(i - j) + abs(j - k) + abs(k - i), where abs(x) denotes the absolute value of x.

Return an integer denoting the minimum possible distance of a good tuple. If no good tuples exist, return -1.
*/

class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        int minDist = INT_MAX;

        for (int i = 0; i < (int)nums.size()-2; ++i) {
            for (int j = i+1; j < (int)nums.size()-1; ++j) {
                for (int k = j+1; k < (int)nums.size(); ++k) {
                    if (nums[i] == nums[j] && nums[j] == nums[k]) {
                        minDist = min(abs(i - j) + \
                                      abs(j - k) + \
                                      abs(k - i), minDist);
                    }
                }
            }
        }

        if (minDist == INT_MAX) return -1;
        return minDist;
    }
};
