/*
You are given an array of k linked-lists lists, each linked-list is sorted in ascending order.

Merge all the linked-lists into one sorted linked-list and return it.
*/

void getValues(vector<int>* values, ListNode* node) {
    ListNode* a = node;
    while (a != nullptr) {
        values->push_back(a->val);
        a = a->next;
    }
}

ListNode* createNode(vector<int> values) {
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
    ListNode* mergeKLists(vector<ListNode*>& nodes) {
        vector<int> values;
        
        for (ListNode* node: nodes) {
            getValues(&values, node);
        }

        sort(values.begin(), values.end());

        return createNode(values);
    }
};
