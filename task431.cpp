/*
A distinct string is a string that is present only once in an array.

Given an array of strings arr, and an integer k, return the kth distinct string present in arr. If there are fewer than k distinct strings, return an empty string "".

Note that the strings are considered in the order in which they appear in the array.
*/

class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        // map<string, int> a; // positions
        // map<string, int> b; // count

        // for (int i = 0; i < arr.size(); ++i) {
        //     a[arr[i]] = i;
        //     ++b[arr[i]];
        // }

        // vector<string> result;
        // for (const auto& [str, amount]: b) {
        //     if (amount == 1) 
        //         result.push_back(str);
        // }  

        // sort(result.begin(), result.end(), [&a](const string& i, const string& j) {
        //     return (a[i] < a[j]);
        // });

        // if (k-1 >= result.size()) return "";
        // return result[k-1];

        map<string, int> a;

        for (const string& i: arr) 
            ++a[i];

        int l = 1;
        for (const string& i: arr) {
            if (a[i] == 1) {
                if (l == k) return i;
                l++;
            }
        }

        return "";
    }
};
