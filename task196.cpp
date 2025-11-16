/*
You are given an integer array nums. You need to ensure that the elements in the array are distinct. To achieve this, you can perform the following operation any number of times:

    - Remove 3 elements from the beginning of the array. If the array has fewer than 3 elements, remove all remaining elements.

Note that an empty array is considered to have distinct elements. Return the minimum number of operations needed to make the elements in the array distinct.
*/

class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        unordered_set<int> a;
        for (int i = nums.size()-1; i >= 0; i--) {
            if (a.find(nums[i]) == a.end()) a.insert(nums[i]);
            else break;
        }
        
        int d = nums.size();
        
        int count = 0;
        
        if (a.size() == nums.size()) count = 0;
        else {
            while (d > 0) {
                if (d > a.size()) {
                    if (d > 3) d -= 3;
                    else d -= d;
                } else break;
                count++;
            }
        }
        
        return count;
    }
};
