/*
The XOR total of an array is defined as the bitwise XOR of all its elements, or 0 if the array is empty.

    - For example, the XOR total of the array [2,5,6] is 2 XOR 5 XOR 6 = 1.

Given an array nums, return the sum of all XOR totals for every subset of nums. 

Note: Subsets with the same elements should be counted multiple times.

An array a is a subset of an array b if a can be obtained from b by deleting some (possibly zero) elements of b.
*/

void subsetRecur(int i, vector<int>& arr, 
    vector<vector<int>>& res, vector<int>& subset) {

    if (i == arr.size()) {
        res.push_back(subset);
        return;
    }
    
    subset.push_back(arr[i]);
    subsetRecur(i+1, arr, res, subset);
    
    subset.pop_back();
    subsetRecur(i+1, arr, res, subset);
}

vector<vector<int> > subsets(vector<int>& arr) {
    vector<int> subset;
    vector<vector<int>> res;
    
    subsetRecur(0, arr, res, subset);
    return res;
}

class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        vector<vector<int>> s = subsets(nums);

        int sum = 0;

        for (vector<int>& subset: s) {
            int x = 0;
            
            for (const int& i: subset) {
                x ^= i;
            }

            sum += x;
        }

        return sum;
    }
};
