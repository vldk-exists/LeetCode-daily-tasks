/*
Given an array of integers arr, replace each element with its rank.

The rank represents how large the element is. The rank has the following rules:

    - Rank is an integer starting from 1.
    - The larger the element, the larger the rank. If two elements are equal, their rank must be the same.
    - Rank should be as small as possible.

*/

class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        // O(NlogN)

        // map<int, int> ranks;

        // for (const int& i: arr) ranks[i] = 0;

        // int rank = 1;
        // for (const auto& it: ranks) {
        //     ranks[it.first] = rank;
        //     ++rank;
        // }

        // for (int i = 0; i < arr.size(); ++i) 
        //     arr[i] = ranks[arr[i]];

        // return arr;

        vector<int> copy = arr;
        sort(copy.begin(), copy.end());

        unordered_map<int, int> ranks;

        int rank = 1;
        for (int i = 0; i < copy.size(); ++i) {
            if (ranks.find(copy[i]) == ranks.end()) {
                ranks[copy[i]] = rank;
                ++rank;
            }
        }

        for (int i = 0; i < arr.size(); ++i) 
            arr[i] = ranks[arr[i]];

        return arr;
    }
};
