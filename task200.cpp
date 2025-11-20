/*

				/200 day anniversary!/

Given the heads of two singly linked-lists headA and headB, return the node at which the two lists intersect. If the two linked lists have no intersection at all, return null.
*/

class Solution {
public:
    ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
        ListNode* a = headA;
        while (a != nullptr) {
            ListNode* b = headB;
            while (b != nullptr) {
                if (a == b) return a;
                b = b->next;
            }
            a = a->next;
        } 


        return nullptr;
    }
};
