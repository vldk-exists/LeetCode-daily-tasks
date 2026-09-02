/*
Given an array of strings strs, group the anagrams together. You can return the answer in any order.
*/

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<vector<int>, vector<string>> m;

        for (const string& i: strs) {
            vector<int> letters(26, 0);

            for (const char& j: i) ++letters[j-'a'];

            m[letters].push_back(i);
        }

        vector<vector<string>> result;
        for (const auto& [key, value] : m) {
            result.push_back(value);
        }   

        return result;
    }
};
