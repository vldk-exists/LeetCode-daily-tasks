/*
You are given an integer array deck where deck[i] represents the number written on the ith card.

Partition the cards into one or more groups such that:

    Each group has exactly x cards where x > 1, and
    All the cards in one group have the same integer written on them.

Return true if such partition is possible, or false otherwise.
*/

#include <numeric>

int gcd(int a, int b) {
    while (b) {
        int temp = b;
        b = a % b;
        a = temp;
    }

    return a;
}

class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        unordered_map<int, int> count_hashmap;

        for (int i: deck) {
            count_hashmap[i]++;
        }

        vector<int> count_vector;
        for (auto& item: count_hashmap) {
            count_vector.push_back(item.second);
        }

        int res = count_vector[0];
        for (int i = 1; i < count_vector.size(); ++i) {
            res = gcd(res, count_vector[i]);
        }

        if (res > 1) {
            return true;
        } else {
            return false;
        }
    }
};
