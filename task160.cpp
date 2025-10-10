/*
You are given an integer array nums. The unique elements of an array are the elements that appear exactly once in the array.

Return the sum of all the unique elements of nums.
*/

class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int, int> numsMap;

        for (const int& num: nums) { 
            if (numsMap.find(num) != numsMap.end()) numsMap[num]++;
            else numsMap[num] = 1;
        }

        int uniqueSum = 0;

        for (const auto& it: numsMap) if (it.second == 1) uniqueSum += it.first;

        return uniqueSum;
    }
};
