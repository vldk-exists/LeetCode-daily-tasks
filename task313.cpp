/*
The next greater element of some element x in an array is the first greater element that is to the right of x in the same array.

You are given two distinct 0-indexed integer arrays nums1 and nums2, where nums1 is a subset of nums2.

For each 0 <= i < nums1.length, find the index j such that nums1[i] == nums2[j] and determine the next greater element of nums2[j] in nums2. If there is no next greater element, then the answer for this query is -1.

Return an array ans of length nums1.length such that ans[i] is the next greater element as described above.
*/

// class Solution {
// public:
//     vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
//         vector<int> result;

//         for (int i = 0; i < nums1.size(); ++i) {
//             int toAdd = -1;
//             for (int j = 0; j < nums2.size(); ++j) {
//                 if (nums1[i] == nums2[j]) {
//                     for (int k = j+1; k < nums2.size(); ++k) {
//                         if (nums2[j] < nums2[k]) {
//                             toAdd = nums2[k];
//                             break;
//                         }
//                     }
//                 }
//             }
//             result.push_back(toAdd);
//         }

//         return result;
//     }
// };

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;
        
        map<int, int> indicesMap;

        for (int i = 0; i < nums2.size(); ++i) indicesMap[nums2[i]] = i;

        for (const int& i: nums1) {
            int j = indicesMap[i];
            int toAdd = -1;
            for (int k = j+1; k < nums2.size(); ++k) {
                if (nums2[k] > i) {
                    toAdd = nums2[k];
                    break;
                }
            }

            result.push_back(toAdd);
        }

        return result;
    }
};
