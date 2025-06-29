/*
You have an array of floating point numbers averages which is initially empty. You are given an array nums of n integers where n is even.

You repeat the following procedure n / 2 times:

    1)Remove the smallest element, minElement, and the largest element maxElement, from nums.
    2)Add (minElement + maxElement) / 2 to averages.

Return the minimum element in averages.
*/

class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<double> a;
        int left = 0, right = nums.size()-1;

        while (left<right) {
            double b = (double)(nums[left]+nums[right])/2;
            a.push_back(b);
            left++;
            right--;
        }
        for (double i: a) cout << i << " ";
        cout << endl;
        return *min_element(a.begin(), a.end());
    }
};
