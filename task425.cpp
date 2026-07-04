/*
Given the head of a singly linked list, reverse the list, and return the reversed list.
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

/*
Consider:Can you rewrite this to reverse the actual node pointers iteratively using O(1) space?
*/

// class Solution {
// public:
//     ListNode* reverseList(ListNode* head) {
//         vector<int> values;
//         ListNode* a = head;
//         while (a != nullptr) {
//             values.push_back(a->val);
//             a = a->next;
//         }

//         ListNode* b = head;
//         for (int i = values.size()-1; i >= 0; --i) {
//             b->val = values[i];
//             b = b->next;
//         }

//         return head;
//     }
// };

// class Solution {
// public:
//     vector<int> values;
//     int i = 0;

//     void getValues(ListNode* node) {
//         if (node == nullptr) return;

//         values.push_back(node->val);
//         getValues(node->next);
//     }

//     void changeValues(ListNode* node) {
//         if (node == nullptr) return;

//         node->val = values[i--];
//         changeValues(node->next);
//     }

//     ListNode* reverseList(ListNode* head) {
//         getValues(head);

//         i = values.size()-1;

//         changeValues(head);

//         return head;
//     }
// };

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        int size = 0;

        ListNode* a = head;
        while (a != nullptr) {
            ++size;
            a = a->next;
        }

        ListNode* b = head;
        for (int i = 0; i < size; ++i) {
            ListNode* c = b;
            for (int j = i; j < size-i-1; ++j) {
                c = c->next;
            }

            swap(b->val, c->val);
            b = b->next;
        }

        return head;
    }
};
