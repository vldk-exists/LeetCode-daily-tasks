/*
You are given an integer array nums consisting of unique integers.

Originally, nums contained every integer within a certain range. However, some integers might have gone missing from the array.

The smallest and largest integers of the original range are still present in nums.

Return a sorted list of all the missing integers in this range. If no integers are missing, return an empty list.
*/

class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int maxEl = 0;
        int minEl = 101;
        for (const int& i: nums) {
            if (i > maxEl) maxEl = i;
            if (i < minEl) minEl = i;
        } 
        
        vector<bool> lookup(maxEl-minEl, false);

        for (const int& i: nums) {
            lookup[i-minEl] = true;
        }

        vector<int> result;

        for (int i = minEl; i <= maxEl; ++i) {
            if (!lookup[i-minEl])
                result.push_back(i);
        }

        return result;
    }
};
