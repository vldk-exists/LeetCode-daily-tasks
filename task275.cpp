/*
There is an undirected star graph consisting of n nodes labeled from 1 to n. A star graph is a graph where there is one center node and exactly n - 1 edges that connect the center node with every other node.

You are given a 2D integer array edges where each edges[i] = [ui, vi] indicates that there is an edge between the nodes ui and vi. Return the center of the given star graph.
*/

class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        set<int> a;

        for (const vector<int>& i: edges) {
            for (const int& j: i) {
                if (a.find(j) == a.end()) a.insert(j);
                else return j;                
            }
        }

        return -1;
    }
};
