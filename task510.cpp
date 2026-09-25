/*
You have n  tiles, where each tile has one letter tiles[i] printed on it.

Return the number of possible non-empty sequences of letters you can make using the letters printed on those tiles.
*/

class Solution {
public:
    void func(vector<int> a, int& count) {
        for (int& i: a) {
            if (i > 0) {
                --i;
                ++count;
                func(a, count);
                ++i;
            }
        }
    }

    int numTilePossibilities(string tiles) {
        vector<int> a(26, 0);
        int count = 0;

        for (const char& i: tiles) {
            ++a[i-'A'];
        }

        func(a, count);

        return count;
    }
};
