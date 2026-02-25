/*
You are given an integer array arr. Sort the integers in the array in ascending order by the number of 1's in their binary representation and in case of two or more integers have the same number of 1's you have to sort them in ascending order.

Return the array after sorting it.
*/

// class Solution {
// public:
//     int getAmountOfBits(int n) {
//         int count = 0;
//         while (n > 0) {
//             if ((n&1) > 0) count++;
//             n >>= 1;
//         }

//         return count;
//     }

//     vector<int> sortByBits(vector<int>& arr) {
//         map<int, vector<int>> arrMap;

//         for (int n: arr) {
//             int count = getAmountOfBits(n);
//             arrMap[count].push_back(n);
//             sort(arrMap[count].begin(), arrMap[count].end());
//         }

//         vector<int> result;

//         for (const auto& it: arrMap) {
//             for (const int& i: it.second) {
//                 result.push_back(i);
//             }
//         }

//         return result;
//     }
// };

int getAmountOfBits(int n) {
    int count = 0;
    while (n > 0) {
        if ((n&1) > 0) count++;
        n >>= 1;
    }

    return count;
}

bool compare(const int& a, const int& b) {
    int countA = getAmountOfBits(a);
    int countB = getAmountOfBits(b);
    if (countA == countB) return a < b;
    return countA<countB;
}

class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(), arr.end(), compare);

        return arr;
    }
};
