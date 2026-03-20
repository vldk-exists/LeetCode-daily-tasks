/*
The product difference between two pairs (a, b) and (c, d) is defined as (a * b) - (c * d).

    - For example, the product difference between (5, 6) and (2, 7) is (5 * 6) - (2 * 7) = 16.

Given an integer array nums, choose four distinct indices w, x, y, and z such that the product difference between pairs (nums[w], nums[x]) and (nums[y], nums[z]) is maximized.

Return the maximum such product difference.
*/

void radixSort(std::vector<int>& arr) {
    int k = 1;

    int maxNum = 0;
    for (const int& i: arr) {
        if (maxNum < i) maxNum = i;
    }

    while (maxNum >= k) {
        std::vector<std::vector<int>> buckets(10);
        std::vector<int> buffer;

        for (const int& i: arr) {
            buckets[(i / k) % 10].push_back(i);
        }
        
        for (const std::vector<int>& i: buckets) {
            for (const int& j: i) {
                buffer.push_back(j);
            }
        }

        arr.swap(buffer);

        k *= 10;
    }
}

class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        const int n = nums.size();
        radixSort(nums);

        return (nums[n-1] * nums[n-2]) - (nums[0]*nums[1]);
    }
};
