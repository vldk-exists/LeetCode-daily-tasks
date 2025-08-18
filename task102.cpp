/*
You are given an integer array nums and an integer k. You want to find a subsequence of nums of length k that has the largest sum.

Return any such subsequence as an integer array of length k.

A subsequence is an array that can be derived from another array by deleting some or no elements without changing the order of the remaining elements.
*/

class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        vector<pair<int, int>> vector_map;
        for (int i = 0; i < nums.size(); i++) {
            vector_map.push_back(pair<int, int>(i, nums[i]));
        }

        sort(vector_map.begin(), vector_map.end(), [](const pair<int, int> a, const pair<int, int> b) {
            return a.second < b.second;
        });

        int i = 0;
        int j = vector_map.size()-1;

        vector<int> result(k);

        while (k > 0) {
            result[i] = vector_map[j].first;
            i++;
            j--;
            k--;
        }

        sort(result.begin(), result.end());

        for (int i = 0; i < result.size(); i++) {
            result[i] = nums[result[i]];
        }

        return result;
    }
};
