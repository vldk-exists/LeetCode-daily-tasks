/*
You are given a 0-indexed array words consisting of distinct strings.

The string words[i] can be paired with the string words[j] if:

    - The string words[i] is equal to the reversed string of words[j].
    - 0 <= i < j < words.length.

Return the maximum number of pairs that can be formed from the array words.

Note that each string can belong in at most one pair.
*/

class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        // vector<string> reversed;
        // for (string i: words) {
        //     reverse(i.begin(), i.end());

        //     reversed.push_back(i);
        // }

        // int count = 0;

        // for (int i = 0; i < words.size(); ++i) {
        //     for (int j = i+1; j < words.size(); ++j) {
        //         if (words[i] == reversed[j]) {
        //             ++count;
        //             break;
        //         }
        //     }
        // }


        int count = 0;
        unordered_set<string> a;
        for (string i: words) {
            if (a.find(i) != a.end()) {
                ++count;
            } else {
                reverse(i.begin(), i.end());
                a.insert(i);
            }
        }

        return count;
    }
};
