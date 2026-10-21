/*
Given a directed acyclic graph (DAG) of n nodes labeled from 0 to n - 1, find all possible paths from node 0 to node n - 1 and return them in any order.

The graph is given as follows: graph[i] is a list of all nodes you can visit from node i (i.e., there is a directed edge from node i to node graph[i][j]).
*/

class Solution {
public:
    void func(int node, const vector<vector<int>>& graph, vector<int> variant, vector<vector<int>>& result) {
        for (const int& i: graph[node]) {
            variant.push_back(i);

            if (i == graph.size()-1) {
                result.push_back(variant);
            } else {
                func(i, graph, variant, result);
            }

            variant.pop_back();
        }
    }

    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<vector<int>> result;
        vector<int> variant = {0};
        int node = 0;

        func(node, graph, variant, result);

        return result;
    }
};
