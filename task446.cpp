/*
Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.

We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.

You must solve this problem without using the library's sort function.
*/

void radixSort(std::vector<int>& arr) {
    std::vector<std::vector<int>> buckets(3);
    std::vector<int> buffer;
    int k = 1;

    int maxNum = 0;
    for (const int& i: arr) {
        if (maxNum < i) maxNum = i;
    }

    while (maxNum >= k) {
        buckets.clear();
        buckets.resize(10);

        for (const int& i: arr) {
            buckets[(i / k) % 10].push_back(i);
        }
        
        buffer.clear();
        buffer.reserve(arr.size());

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
    void sortColors(vector<int>& nums) {
        radixSort(nums);
    }
};
