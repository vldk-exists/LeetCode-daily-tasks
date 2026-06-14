/*
You are given an integer n. A 0-indexed integer array nums of length n + 1 is generated in the following way:

    - nums[0] = 0
    - nums[1] = 1
    - nums[2 * i] = nums[i] when 2 <= 2 * i <= n
    - nums[2 * i + 1] = nums[i] + nums[i + 1] when 2 <= 2 * i + 1 <= n

Return the maximum integer in the array nums​​​.
*/

class Solution {
public:
    int getMaximumGenerated(int n) {
        if (n == 0) return 0;
        int maxEl = 1;
        vector<int> arr(n+1);
        arr[1] = 1;
        for (int i = 1;; ++i) {
            int a = i * 2;
            if (a > n) break;
            arr[a] = arr[i];
            maxEl = max(maxEl, arr[a]);

            int b = i*2 + 1;
            if (b > n) break;
            arr[b] = arr[i] + arr[i+1];
            maxEl = max(maxEl, arr[b]);
        }   

        return maxEl;
    }
};
