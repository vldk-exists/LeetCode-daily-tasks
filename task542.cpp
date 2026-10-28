/*
You are given a 0-indexed, strictly increasing integer array nums and a positive integer diff. A triplet (i, j, k) is an arithmetic triplet if the following conditions are met:

    - i < j < k,
    - nums[j] - nums[i] == diff, and
    - nums[k] - nums[j] == diff.

Return the number of unique arithmetic triplets.
*/

class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        unordered_set<int> a;

        for (int i = 0; i < nums.size(); ++i)  {
            a.insert(nums[i]);
        }

        int count = 0;

        for (int i = 0; i < nums.size() - 2; ++i) {
            bool b = a.find(nums[i] + diff) != a.end();
            bool c = a.find(nums[i] + 2*diff) != a.end();

            count += b && c;
        }


        return count;
    }
};
