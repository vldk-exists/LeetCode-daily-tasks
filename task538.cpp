/*
Given an array of integers nums, sort the array in increasing order based on the frequency of the values. If multiple values have the same frequency, sort them in decreasing order.

Return the sorted array.
*/

class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        int a[201] = {0};

        for (const int& i: nums) {
            ++a[i+100];
        }

        int maxA = 0;

        for (const int& i: a) {
            if (maxA < i) 
                maxA = i;
        }  

        vector<int> b[maxA];

        for (int i = 200; i >= 0; --i) {
            if (a[i] > 0) {
                b[a[i]-1].push_back(i-100);
            }
        }

        vector<int> result;

        for (const vector<int>& i: b) {
            for (const int& j: i) {
                for (int k = 0; k < a[j+100]; ++k) {
                    result.push_back(j);
                }
            }
        }

        return result;
    }
};
