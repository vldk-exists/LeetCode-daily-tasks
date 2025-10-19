/*
You are given a 0-indexed integer array nums and two integers key and k. A k-distant index is an index i of nums for which there exists at least one index j such that |i - j| <= k and nums[j] == key.

Return a list of all k-distant indices sorted in increasing order.
*/

class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        set<int> result;
        
        for (int j = 0; j < nums.size(); j++) {
            if (nums[j] == key) {
                for (int i = 0; i < nums.size(); i++) {
                    if (abs(i - j) <= k) result.insert(i);
                }
            }
        }

        return vector<int>(result.begin(), result.end());
    }
};
