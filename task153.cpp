/*
Given a 2D integer array nums where nums[i] is a non-empty array of distinct positive integers, return the list of integers that are present in each array of nums sorted in ascending order. 
*/

class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        unordered_map<int, int> countMap;
        
        for (vector<int> i: nums) {
            for (int j: i) {
                if (countMap.find(j) != countMap.end()) countMap[j]++;
                else countMap[j] = 1;
            }
        }

        vector<int> intersectionVector;

        for (auto& it: countMap) {
            if (it.second == nums.size()) intersectionVector.push_back(it.first);
        }

        sort(intersectionVector.begin(), intersectionVector.end());

        return intersectionVector;
    }
};
