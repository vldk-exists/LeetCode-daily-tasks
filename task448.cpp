/*
Given two integers n and k, return all possible combinations of k numbers chosen from the range [1, n].

You may return the answer in any order.
*/

class Solution {
public:
    void func(int start, const int& end, const int& k, vector<int>& variant, vector<vector<int>>& result) {
        if (variant.size() == k) {
            result.push_back(variant);
            return;
        }

        for (int i = start; i <= end; ++i) {
            variant.push_back(i);

            func(i+1, end, k, variant, result);

            variant.pop_back();
        }
    }

    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> result;
        vector<int> variant;
        int start = 1;
        int end = n;

        func(start, end, k, variant, result);

        return result;
    }
};
