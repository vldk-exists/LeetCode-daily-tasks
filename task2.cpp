/*
You are given an integer array nums. You need to create a 2D array from nums satisfying the following conditions:

    The 2D array should contain only the elements of the array nums.
    Each row in the 2D array contains distinct integers.
    The number of rows in the 2D array should be minimal.

Return the resulting array. If there are multiple answers, return any of them.

Note that the 2D array can have a different number of elements on each row.
*/

class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        vector<vector<int>> rows;

        while (!nums.empty()) {
            vector<int> temp, indexes, row;
            int index1 = 0;

            for (int num: nums) {  
                if (find(row.begin(), row.end(), num) == row.end()) {
                    row.push_back(num);
                    indexes.push_back(index1);
                }
                index1++;
            }

            int index2 = 0;
            for (int num: nums) {
                if (find(indexes.begin(), indexes.end(), index2) == indexes.end()) {
                    temp.push_back(num);
                }
                index2++;
            } 
            nums = temp;      
            rows.push_back(row);    
        }

        return rows;
    }
};
