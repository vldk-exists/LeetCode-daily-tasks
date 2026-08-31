/*
A critical point in a linked list is defined as either a local maxima or a local minima.

A node is a local maxima if the current node has a value strictly greater than the previous node and the next node.

A node is a local minima if the current node has a value strictly smaller than the previous node and the next node.

Note that a node can only be a local maxima/minima if there exists both a previous node and a next node.

Given a linked list head, return an array of length 2 containing [minDistance, maxDistance] where minDistance is the minimum distance between any two distinct critical points and maxDistance is the maximum distance between any two distinct critical points. If there are fewer than two critical points, return [-1, -1].
*/

class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int> idx;

        ListNode* temp = head;
        ListNode* prev = nullptr;
        ListNode* next = nullptr;
        int i = 0;

        while (temp != nullptr) {
            next = temp->next;
            if (prev != nullptr && next != nullptr) {
                if ((temp->val > prev->val && temp->val > next->val) ||
                    (temp->val < prev->val && temp->val < next->val)) {
                        idx.push_back(i);
                    }
            }

            prev = temp;
            temp = temp->next;
            ++i;
        }

        if (idx.size() < 2) return {-1, -1};

        int minLength = INT_MAX;
        for (int i = 0; i < idx.size()-1; ++i) {
            minLength = min(minLength, idx[i+1] - idx[i]);
        }

        int maxLength = idx[idx.size() - 1] - idx[0];

        return {minLength, maxLength};
    }
};
