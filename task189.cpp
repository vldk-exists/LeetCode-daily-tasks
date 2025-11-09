/*
Given the root of a Binary Search Tree (BST), return the minimum difference between the values of any two different nodes in the tree.
*/

class Solution {
public:
    int minDiffInBST(TreeNode* root) {
        queue<TreeNode*> q;

        vector<int> values;
        TreeNode* a = root;
        q.push(a);
        while (!q.empty()) {
            TreeNode* b = q.front();
            q.pop();

            values.push_back(b->val);

            if (b->left != nullptr) q.push(b->left);
            if (b->right != nullptr) q.push(b->right);
        }

        sort(values.begin(), values.end());

        int minDiff = INT_MAX;

        for (int i = 0; i < values.size()-1; i++) {
            minDiff = min(minDiff, abs(values[i] - values[i+1]));
        }

        return minDiff;
    }
};
