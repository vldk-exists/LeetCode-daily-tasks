/*
You are given an array nums, where each number in the array appears either once or twice.

Return the bitwise XOR of all the numbers that appear twice in the array, or 0 if no number appears twice.
*/

class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        vector<int> a, b;
        for (int i: nums) {
            if (find(b.begin(), b.end(), i) != b.end()) {
                a.push_back(i);
            } else {
                b.push_back(i);
            }
        }

        for (int i: a) cout << i << " "; cout << endl;

        if (a.size() > 1) {
            int res = 0;
            for (int i: a) {
                res ^= i;
            }
            return res;
        } else if (a.size() == 1) {
            return a[0];
        }
        return 0;
    }
};
