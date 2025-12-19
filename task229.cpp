/*
You are given an array of strings names, and an array heights that consists of distinct positive integers. Both arrays are of length n.

For each index i, names[i] and heights[i] denote the name and height of the ith person.

Return names sorted in descending order by the people's heights.
*/

class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        const int n = names.size();
        map<int, string> a;
        
        for (int i = 0; i < n; i++) {
            a[heights[i]] = names[i];
        }

        vector<string> res;

        for (auto it = a.rbegin(); it != a.rend(); it++) {
            res.push_back((*it).second);
        }

        return res;
    }
};
