/*
Find all valid combinations of k numbers that sum up to n such that the following conditions are true:

    - Only numbers 1 through 9 are used.
    - Each number is used at most once.

Return a list of all possible valid combinations. The list must not contain the same combination twice, and the combinations may be returned in any order.
*/

class Solution {
public:
    void func(vector<vector<int>>& result,
              vector<int>& variant, 
              int startNumber,
              int& sum,
              int& amount,
              const int& k, 
              const int& n) {

        if (amount == k) {
            if (sum == n) 
                result.push_back(variant);
            return;
        } else if (amount > k) return;
        
        for (int i = startNumber; i <= 9; ++i) {
            variant.push_back(i);
            ++amount;
            sum += i;

            ++startNumber;

            func(result, variant, startNumber, sum, amount, k, n);
            
            variant.pop_back();
            --amount;
            sum -= i;
        }
    } 

    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> result = {};
        vector<int> variant = {};
        int sum = 0;
        int amount = 0;
        int startNumber = 1;

        func(result, variant, startNumber, sum, amount, k, n);

        return result; 
    }
};
