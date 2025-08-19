/*
Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:
    - Open brackets must be closed by the same type of brackets.
    - Open brackets must be closed in the correct order.
    - Every close bracket has a corresponding open bracket of the same type.
*/

class Solution {
public:
    vector<char> bracketsStack;
    unordered_map<char, char> bracketsMap = {
        {'(', ')'},
        {'{', '}'},
        {'[', ']'}
    };

    bool isValid(string s) {
        for (const char &bracket: s) {
            if (bracket == '(' || bracket == '{' || bracket == '[') {
                bracketsStack.push_back(bracket);
            } else {
                if (bracketsStack.size() > 0 && bracketsMap[bracketsStack.back()] == bracket) bracketsStack.pop_back();
                else return false;
            }
        }

        if (bracketsStack.size() > 0) return false;

        return true;
    }
};
