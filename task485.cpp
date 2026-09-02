/*
Given the root of an n-ary tree, return the preorder traversal of its nodes' values.
*/

class Solution {
public:
    void func(Node* node, vector<int>& result) {
        if (node == nullptr) return;

        result.push_back(node->val);

        for (Node* child: node->children) {
            func(child, result);
        }
    }
    
    vector<int> preorder(Node* root) {
        vector<int> result;

        func(root, result);

        return result;
    }
};
