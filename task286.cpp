/*
You are given an integer array nums and an integer k.

Return an integer denoting the sum of all elements in nums whose frequency is divisible by k, or 0 if there are no such elements.

Note: An element is included in the sum exactly as many times as it appears in the array if its total frequency is divisible by k.
*/

class Solution {
public:
    int sumDivisibleByK(vector<int>& nums, int k) {
        map<int, int> freqMap;
        for (const int& i: nums) freqMap[i]++;

        int result = 0;
        for (const auto& i: freqMap) {
            if (i.second % k == 0) result += i.first*i.second;
        }

        return result;
    }
};
