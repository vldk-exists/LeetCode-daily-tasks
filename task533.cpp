/*
You are given an array items, where each items[i] = [typei, colori, namei] describes the type, color, and name of the ith item. You are also given a rule represented by two strings, ruleKey and ruleValue.

The ith item is said to match the rule if one of the following is true:

    - ruleKey == "type" and ruleValue == typei.
    - ruleKey == "color" and ruleValue == colori.
    - ruleKey == "name" and ruleValue == namei.

Return the number of items that match the given rule.
*/

class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int toCheck = 0;

        if (ruleKey == "type") 
            toCheck = 0;
        else if (ruleKey == "color") 
            toCheck = 1;
        else 
            toCheck = 2;

        int count = 0;

        for (const vector<string>& i: items) {
            if (i[toCheck] == ruleValue)
                ++count;
        }

        return count;
    }
};
