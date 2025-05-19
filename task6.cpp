/*
Given a binary array nums, return the maximum length of a contiguous subarray with an equal number of 0 and 1.
*/

class Solution {
public:
    int findMaxLength(vector<int>& nums) {
            unordered_map<int, int> m;
            m[0] = -1;
            int count = 0, max_length = 0;
            for (int i = 0; i < nums.size(); i++) {
                count += (nums[i] == 1) ? 1 : -1;
                if (m.find(count) != m.end()) {
                    max_length = max(max_length, i-m[count]);
                } else {
                    m[count] = i;
                }
            }
            return max_length;
    }
};
