/*
Given an array of positive integers nums, return an array answer that consists of the digits of each integer in nums after separating them in the same order they appear in nums.

To separate the digits of an integer is to get all the digits it has in the same order.

    - For example, for the integer 10921, the separation of its digits is [1,0,9,2,1].
*/

class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> res;

        for (int num: nums) {
            string str_num = to_string(num);
            for (char i: str_num) res.push_back(i-'0');
        }
        
        return res;
    }
};
