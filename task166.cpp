/*
Given an array of positive integers arr, find a pattern of length m that is repeated k or more times.

A pattern is a subarray (consecutive sub-sequence) that consists of one or more values, repeated multiple times consecutively without overlapping. A pattern is defined by its length and the number of repetitions.

Return true if there exists a pattern of length m that is repeated k or more times, otherwise return false.
*/

class Solution {
public:
    bool containsPattern(vector<int>& arr, int m, int k) {
        vector<int> currentBuffer;
        vector<int> previousBuffer;
        int counter = 1;
        
        for (int z = 0; z < arr.size(); z++) {
            for (int i = 0+z; i <= arr.size()-m;) {
                vector<int> buffer;
                for (int j = 0; j < m; j++) {
                    buffer.push_back(arr[i+j]);
                }

                currentBuffer = buffer;

                if (currentBuffer == previousBuffer) counter++;

                if (counter == k) return true;

                if (currentBuffer != previousBuffer) counter = 1;

                previousBuffer = currentBuffer;

                i += m;
            }
            counter = 1;
            currentBuffer = {};
            previousBuffer = {};
        }   

        return false;
    }
};
