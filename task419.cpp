/*
Given the root of a binary tree, return the average value of the nodes on each level in the form of an array. Answers within 10-5 of the actual answer will be accepted.
*/

class Solution {
public:
    vector<vector<int>> levels = {};

    void func(TreeNode* node, int level = 0) {
        if (levels.size() == 0 || level >= levels.size()) 
            levels.push_back({node->val});
        else if (level < levels.size())
            levels[level].push_back(node->val);

        if (node->left != nullptr) func(node->left, level+1);

        if (node->right != nullptr) func(node->right, level+1);
    }

    vector<double> averageOfLevels(TreeNode* root) {
        func(root);

        vector<double> res;

        for (const vector<int>& i: levels) {
            long long int s = 0;

            for (const int& j: i) s += j;
            res.push_back((double)s / i.size());
        }

        return res;
    }
};
