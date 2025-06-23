/*
You are given a non-negative integer array nums. In one operation, you must:

    Choose a positive integer x such that x is less than or equal to the smallest non-zero element in nums.
    Subtract x from every positive element in nums.

Return the minimum number of operations to make every element in nums equal to 0.
*/

class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        vector<int> a;
        int b = 0;
        while (true) {
            vector<int> c; 
            for (int i: nums) {if (i > 0) c.push_back(i);}
            a = c;
            if (!a.empty()) {
                int d = *min_element(a.begin(), a.end());
                for (int j = 0; j < nums.size(); j++) {
                    if (nums[j] > 0) nums[j] -= d;
                }
                b++;
            } else {
                break;
            }
        }
        return b;
    }
};
