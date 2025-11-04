/*
You are given an array nums of n integers and two integers k and x.

The x-sum of an array is calculated by the following procedure:

    Count the occurrences of all elements in the array.
    Keep only the occurrences of the top x most frequent elements. If two elements have the same number of occurrences, the element with the bigger value is considered more frequent.
    Calculate the sum of the resulting array.

Note that if an array has less than x distinct elements, its x-sum is the sum of the array.

Return an integer array answer of length n - k + 1 where answer[i] is the x-sum of the
subarray nums[i..i + k - 1].
*/

class Solution {
public:
    int xSum(vector<int>& nums, int k, int x, int i) {
        unordered_map<int, int> occurMap;
        for (int j = i; j < i+k; j++) occurMap[nums[j]]++;
        
        int res = 0;
        
        for (int j = 0; j < x; j++) {
            if (occurMap.empty()) break;
            int maxOccur = 0;
            int maxElem = 0;
            
            for (const auto& it: occurMap) {
                if (maxOccur < it.second) {
                    maxOccur = it.second;
                    maxElem = it.first;
                } else if (maxOccur == it.second) {
                    maxElem = max(it.first, maxElem);
                }
            }

            res += maxOccur * maxElem;
            occurMap.erase(maxElem);
        }
        
        return res;
    }

    vector<int> findXSum(vector<int>& nums, int k, int x) {
        vector<int> answer;
        
        for (int i = 0; i < nums.size()-k+1; i++) {
            answer.push_back(xSum(nums, k, x, i));
        }

        return answer;
    }
};
