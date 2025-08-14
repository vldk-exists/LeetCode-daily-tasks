/*
You are given a string num representing a large integer. An integer is good if it meets the following conditions:

   - It is a substring of num with length 3.
   - It consists of only one unique digit.

Return the maximum good integer as a string or an empty string "" if no such integer exists.

Note:

   - A substring is a contiguous sequence of characters within a string.
   - There may be leading zeroes in num or a good integer.
*/

class Solution {
public:
    unordered_map<string, int> subnums = {
        {"000", 000}, 
        {"111", 111},
        {"222", 222},
        {"333", 333},
        {"444", 444},
        {"555", 555},
        {"666", 666},
        {"777", 777},
        {"888", 888},
        {"999", 999}
    };
    string largestGoodInteger(string num) {
        vector<int> a;

        for (auto &pair: subnums) {
            if (num.find(pair.first) != string::npos) a.push_back(pair.second);
        }

        if (!a.empty()) {
            int max_subnum = *max_element(a.begin(), a.end());
            if (max_subnum == 0) return "000";
            return to_string(max_subnum);
        } return "";

    }
};
