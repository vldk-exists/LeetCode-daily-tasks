/*
Given a non-empty array of non-negative integers nums, the degree of this array is defined as the maximum frequency of any one of its elements.

Your task is to find the smallest possible length of a (contiguous) subarray of nums, that has the same degree as nums.
*/

class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        map<int, tuple<int, int, int>> a;
        int maxDegree = 0;
        for (int i = 0; i < nums.size(); ++i) {
            if (a.find(nums[i]) == a.end()) {
                a[nums[i]] = {1, i, -1};
            } else {
                int& freq = get<0>(a[nums[i]]);
                int& j = get<2>(a[nums[i]]);

                ++freq;
                if (i > j) j = i;
            }

            const int& freq = get<0>(a[nums[i]]);
            if (freq > maxDegree) maxDegree = freq;
        }

        int minLength = INT_MAX;
        for (const auto& [num, val]: a) {
            const int& count = get<0>(val); 
            if (count == maxDegree) {
                const int& i = get<1>(val);
                const int& j = get<2>(val);

                if (j != -1) {
                    minLength = min(j - i + 1, minLength);
                } else {
                    minLength = 1;
                    break;
                }
            }

        }

        return minLength;
    }
};
