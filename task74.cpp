/*
You are given the heads of two sorted linked lists list1 and list2.

Merge the two lists into one sorted list. The list should be made by splicing together the nodes of the first two lists.

Return the head of the merged linked list.
*/

void getValues(vector<int>* values, ListNode* l) {
    ListNode* a = l;
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
    } return nullptr;
}

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        vector<int> values;

        getValues(&values, list1);
        getValues(&values, list2);

        sort(values.begin(), values.end());

        return createList(values);
    }
};
