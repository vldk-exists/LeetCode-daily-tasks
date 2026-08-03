/*
Given an integer n, return all the numbers in the range [1, n] sorted in lexicographical order.

You must write an algorithm that runs in O(n) time and uses O(1) extra space. 
*/

class Solution {
public:
    void func(int i, const int& n, vector<int>& result) {
        if (i <= n)
            result.push_back(i);
        else 
            return;

        for (int j = 0; j <= 9; ++j) {
            func(i*10 + j, n, result);
        }
    }

    vector<int> lexicalOrder(int n) {
        vector<int> result;

        for (int i = 1; i <= 9; ++i) {
            func(i, n, result);
        }

        return result;
    }
};
