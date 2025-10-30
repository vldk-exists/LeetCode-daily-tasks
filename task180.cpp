/*
You are given an integer array digits, where each element is a digit. The array may contain duplicates.

You need to find all the unique integers that follow the given requirements:

    The integer consists of the concatenation of three elements from digits in any arbitrary order.
    The integer does not have leading zeros.
    The integer is even.

For example, if the given digits were [1, 2, 3], integers 132 and 312 follow the requirements.

Return a sorted array of the unique integers.
*/

class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        vector<int> res;
        
        for (int i = 100; i <= 999; i++) {
            if ((i & 1) == 0) {
                vector<int> digitsCopy = digits;

                int x = i;
                while (x > 0) {
                    int digit = x % 10;

                    const auto& it = find(digitsCopy.begin(), digitsCopy.end(), digit);

                    if (it != digitsCopy.end()) digitsCopy.erase(it);
                    
                    x /= 10;
                }

                if (digitsCopy.size() == digits.size()-3) res.push_back(i);
            }
        }

        return res;
    }
};
