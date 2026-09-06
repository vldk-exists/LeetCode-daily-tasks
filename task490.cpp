/*
Given a n-ary tree, find its maximum depth.
*/

class Solution {
public:
    void func(const Node* node, int& maxDepth, int depth = 1) {
        if (node == nullptr)
            return;

        if (node->children.empty()) {
            if (depth > maxDepth) {
                maxDepth = depth;
            }
            return;
        }

        for (const Node* child : node->children) {
            func(child, maxDepth, depth + 1);
        }
    }
    int maxDepth(Node* root) {
        int maxDepth = 0;

        func(root, maxDepth);

        return maxDepth;
    }
};
