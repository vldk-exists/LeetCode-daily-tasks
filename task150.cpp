/*
You are given an array apple of size n and an array capacity of size m.

There are n packs where the ith pack contains apple[i] apples. There are m boxes as well, and the ith box has a capacity of capacity[i] apples.

Return the minimum number of boxes you need to select to redistribute these n packs of apples into boxes.

Note that, apples from the same pack can be distributed into different boxes.
*/

class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        sort(apple.begin(), apple.end());
        sort(capacity.begin(), capacity.end());

        int n = apple.size();
        int m = capacity.size();

        int a = accumulate(apple.begin(), apple.end(), 0);
        int b = accumulate(capacity.begin(), capacity.end(), 0);
        if (a == b) return m;
        
        int count = 0;
        while (a > 0) {
            int pop_value = capacity.back();
            capacity.pop_back();

            a -= pop_value;

            count++;
        }

        return count;
    }
};
