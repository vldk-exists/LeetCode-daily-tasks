/*
You are given the array paths, where paths[i] = [cityAi, cityBi] means there exists a direct path going from cityAi to cityBi. Return the destination city, that is, the city without any path outgoing to another city.

It is guaranteed that the graph of paths forms a line without any loop, therefore, there will be exactly one destination city.
*/

class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        map<string, string> pathes;

        for (const vector<string>& i: paths) {
            pathes[i[0]] = i[1];
        }

        for (const auto& it: pathes) {
            if (pathes.find(it.second) == pathes.end()) return it.second;
        }

        return "";
    }
};
