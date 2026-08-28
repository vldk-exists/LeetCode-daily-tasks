/*
Given the head of a linked list and an integer val, remove all the nodes of the linked list that has Node.val == val, and return the new head.
*/

class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        while (head != nullptr && head->val == val) {
            head = head->next;
        }

        if (head == nullptr) return nullptr;
        
        ListNode* current = head;
        ListNode* next = head->next;

        while (next != nullptr) {
            if (next->val == val) {
                ListNode* temp = next->next;

                current->next = temp;
                next = current->next;
            } else {
                current = next;
                next = next->next;
            }
        }

        return head;
    }
};
