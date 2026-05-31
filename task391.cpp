/*
Given two arrays arr1 and arr2, the elements of arr2 are distinct, and all elements in arr2 are also in arr1.

Sort the elements of arr1 such that the relative ordering of items in arr1 are the same as in arr2. Elements that do not appear in arr2 should be placed at the end of arr1 in ascending order.
*/

class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        map<int, int> freq1, freq2;

        for (const int& i: arr2) freq1[i] = 0;

        for (const int& i: arr1) {
            if (freq1.find(i) != freq1.end())
                ++freq1[i];
            else 
                ++freq2[i];
        }

        vector<int> result;

        for (const int& i: arr2) {
            for (int j = 0; j < freq1[i]; ++j) 
                result.push_back(i);
        }

        for (const auto [num, freq]: freq2) {
            for (int i = 0; i < freq; ++i) 
                result.push_back(num);
        }

        return result;
    }
};
