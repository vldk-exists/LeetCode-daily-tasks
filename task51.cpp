/*
Given an n x n binary matrix image, flip the image horizontally, then invert it, and return the resulting image.

To flip an image horizontally means that each row of the image is reversed.

    For example, flipping [1,1,0] horizontally results in [0,1,1].

To invert an image means that each 0 is replaced by 1, and each 1 is replaced by 0.

    For example, inverting [0,1,1] results in [1,0,0].
*/

class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        vector<vector<int>> a;
        for (vector<int> &i: image) {
            reverse(i.begin(), i.end());
            a.push_back(i);
        }

        for (vector<int> &j: a) {
            for (int &k: j) {
                k = k == 0 ? 1 : 0;
            }
        }

        return a;
    }
};
