/*
Given an array nums, you can perform the following operation any number of times:

    - Select the adjacent pair with the minimum sum in nums. If multiple such pairs exist, choose the leftmost one.
    - Replace the pair with their sum.

Return the minimum number of operations needed to make the array non-decreasing.

An array is said to be non-decreasing if each element is greater than or equal to its previous element (if it exists).
*/

class Solution {
public:
    bool ifSorted(vector<int>& a) {
        for (int i = 0; i < a.size()-1; i++) {
            if (a[i] > a[i+1]) return false;
        }

        return true;
    }

    void operate(vector<int>& a) {
        int x, minSum = INT_MAX;

        for (int i = 0; i < a.size()-1; i++) {
            int currentSum = a[i] + a[i+1];
            if (currentSum < minSum) {
                x = i;
                minSum = currentSum;
            }
        }

        a.erase(a.begin()+x);
        a[x] = minSum;
    }

    int minimumPairRemoval(vector<int>& nums) {
        int count = 0;

        while (!ifSorted(nums)) {
            operate(nums);
            count++;
        }

        return count;
    }
};
