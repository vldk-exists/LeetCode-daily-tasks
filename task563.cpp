/*
Given an integer array sorted in non-decreasing order, there is exactly one integer in the array that occurs more than 25% of the time, return that integer.
*/

class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        const int& n = arr.size();
        const int size = arr.size() / 4;

        for (int i = 0; i < n-size; ++i) {
            if (arr[i] == arr[i + size])
                return arr[i];
        }

        return -1;
    }
};

/*
class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        const int& n = arr.size();

        int amount = 1;
        int current = arr[0];
        int maxAmount = amount;
        int result = current;
        for (int i = 1; i < n; ++i) {
            if (current != arr[i]) {
                if (amount > maxAmount) {
                    maxAmount = amount;
                    result = current;
                }
                amount = 1;
                current = arr[i];
            } else ++amount;
        }

        if (amount > maxAmount)
            result = current;

        return result;
    }
};
*/
