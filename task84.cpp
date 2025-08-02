/*
Given the head of a singly linked list, return the middle node of the linked list.

If there are two middle nodes, return the second middle node.
*/

int getLength(ListNode* head) {
    int length = 0;
    ListNode* a = head;

    while (a != nullptr) {
        length++;
        a = a->next;
    }

    return length;
}

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        int length = getLength(head);

        if (length > 1) {
            ListNode* a = head;
            int middle = length / 2;
            for (int i = 0; i < middle; i++) {
                a = a->next;
            }

            return a;
        } return head;
    }
};
