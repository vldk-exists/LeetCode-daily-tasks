/*
You are given an integer array gifts denoting the number of gifts in various piles. Every second, you do the following:

    - Choose the pile with the maximum number of gifts.
    - If there is more than one pile with the maximum number of gifts, choose any.
    - Reduce the number of gifts in the pile to the floor of the square root of the original number of gifts in the pile.

Return the number of gifts remaining after k seconds.
*/

class Solution {
public:
    long long pickGifts(vector<int>& piles, int k) {
        priority_queue<int> maxHeap;

        for (const int& gifts: piles) 
            maxHeap.push(gifts);

        for (; k > 0; --k) {
            long long int toPush = (int)sqrt(maxHeap.top());
            maxHeap.pop();
            maxHeap.push(toPush);
        }

        long long int allGifts = 0;

        while (!maxHeap.empty()) {
            allGifts += maxHeap.top();
            maxHeap.pop();
        }

        return allGifts;
    }
};
