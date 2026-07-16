/*
There are n mountains in a row, and each mountain has a height. You are given an integer array height where height[i] represents the height of mountain i, and an integer threshold.

A mountain is called stable if the mountain just before it (if it exists) has a height strictly greater than threshold. Note that mountain 0 is not stable.
*/

class Solution {
public:
    vector<int> stableMountains(vector<int>& height, int threshold) {
        vector<int> result;
        for (int i = 1; i < height.size(); ++i) {
            if (height[i-1] > threshold) 
                result.push_back(i);
        }

        return result;
    }
};
