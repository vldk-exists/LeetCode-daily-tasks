/*
Given the head of a linked list head, in which each node contains an integer value.

Between every pair of adjacent nodes, insert a new node with a value equal to the greatest common divisor of them.

Return the linked list after insertion.

The greatest common divisor of two numbers is the largest positive integer that evenly divides both numbers.
*/

class Solution {
public:
    int GCD(int a, int b) {
        int c = a > b ? b : a;


        while (c > 1) {
            if (a % c == 0 && b % c == 0)
                break;
            c--;
        }
        return c;
    }
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* a = head;
        ListNode* b = a->next;
        while (b != nullptr) {
            ListNode* c = new ListNode(GCD(a->val, b->val));
            c->next = b;
            a->next = c;

            a = b;
            b = a->next;
        }

        return head;
    }
};
