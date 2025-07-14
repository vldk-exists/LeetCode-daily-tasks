/*
You are given two 2D integer arrays, items1 and items2, representing two sets of items. Each array items has the following properties:

    items[i] = [valuei, weighti] where valuei represents the value and weighti represents the weight of the ith item.
    The value of each item in items is unique.

Return a 2D integer array ret where ret[i] = [valuei, weighti], with weighti being the sum of weights of all items with value valuei.

Note: ret should be returned in ascending order by value.
*/

class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
        items1.insert(items1.end(), items2.begin(), items2.end());

        map<int, int> c;

        for (vector<int> item: items1) {
            int value = item[0];
            int weight = item[1];

            if (c.find(value) != c.end()) c[value] += weight;
            else c[value] = weight;
        }

        vector<vector<int>> ret;

        for (const auto item: c) {
            ret.push_back({item.first, item.second});
        }

        return ret;
    }
};
