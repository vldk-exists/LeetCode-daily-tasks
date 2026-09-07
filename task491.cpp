/*
Given the root of an n-ary tree, return the postorder traversal of its nodes' values.

Nary-Tree input serialization is represented in their level order traversal. Each group of children is separated by the null value (See examples)
*/

class Solution {
public:
    void func(const Node* node, vector<int>& result) {
        if (node == nullptr) return;

        for (const Node* child: node->children) {
            func(child, result);
        }

        result.push_back(node->val);
    }

    vector<int> postorder(Node* root) {
        vector<int> result;

        func(root, result);

        return result;
    }
};
