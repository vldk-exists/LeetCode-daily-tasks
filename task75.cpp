/*
Given the head of a sorted linked list, delete all duplicates such that each element appears only once. Return the linked list sorted as well.
*/

void getValues(vector<int>* values, ListNode* head) {
    ListNode* a = head;
    while (a != nullptr) {
        values->push_back(a->val);
        a = a->next;
    }
}

ListNode* createList(vector<int> values) {
    if (!values.empty()) {
        ListNode* r = new ListNode(values[0]);
        ListNode* a = r;

        for (int i = 1; i < values.size(); i++) {
            ListNode* b = new ListNode(values[i]);
            a->next = b;
            a = b;
        }

        return r;
    }
    return nullptr;
}

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        vector<int> values;

        getValues(&values, head);

        set<int> set_values(values.begin(), values.end());

        values = vector(set_values.begin(), set_values.end());

        return createList(values);
    }
};