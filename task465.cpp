/*
Given an array of integers preorder, which represents the preorder traversal of a BST (i.e., binary search tree), construct the tree and return its root.

It is guaranteed that there is always possible to find a binary search tree with the given requirements for the given test cases.

A binary search tree is a binary tree where for every node, any descendant of Node.left has a value strictly less than Node.val, and any descendant of Node.right has a value strictly greater than Node.val.

A preorder traversal of a binary tree displays the value of the node first, then traverses Node.left, then traverses Node.right.
*/

class Solution {
public:
    TreeNode* bstFromPreorder(vector<int>& p) {
        vector<TreeNode*> s;

        for (const int& i: p) {
            TreeNode* newNode = new TreeNode(i);
            
            if (!s.empty()) {
                if (s.back()->val > i)
                    s.back()->left = newNode;
                else if (s.back()->val < i) 
                    if (i > s.front()->val) {
                        TreeNode* cur = s.front();

                        while (1) {
                            if (cur->val > i)
                                if (cur->left != nullptr)
                                    cur = cur->left;
                                else {
                                    cur->left = newNode;
                                    break;
                                }
                            else 
                                if (cur->right != nullptr)
                                    cur = cur->right;
                                else {
                                    cur->right = newNode;
                                    break;
                                }
                        }
                    } else {
                        while (s.size() > 1 && i > s.back()->val)
                            s.pop_back();

                        TreeNode* cur = s.back();
                        while (1) {
                            if (cur->val > i)
                                if (cur->left != nullptr)
                                    cur = cur->left;
                                else {
                                    cur->left = newNode;
                                    break;
                                }
                            else 
                                if (cur->right != nullptr)
                                    cur = cur->right;
                                else {
                                    cur->right = newNode;
                                    break;
                                }
                        }
                    }
            }

            s.push_back(newNode);
        }

        return s.front();
    }
};
