/*
Given a linked list, swap every two adjacent nodes and return its head. You must solve the problem without modifying the values in the list's nodes (i.e., only nodes themselves may be changed.)
*/

class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        ListNode* curr = nullptr;
        ListNode* prev = nullptr;
        ListNode* res = nullptr;

        curr = res = head;

        if (head != nullptr && head->next != nullptr)
            res = head->next;

        while (curr != nullptr) {
            ListNode* b = curr->next;
            if (b == nullptr) break;

            ListNode* c = b->next;
            curr->next = c;
            b->next = curr;

            if (prev != nullptr) 
                prev->next = b;

            prev = curr;

            curr = curr->next;
        }

        return res;
    }
};
