/*
Given a string s, find any

of length 2 which is also present in the reverse of s.

Return true if such a substring exists, and false otherwise.
*/

class Solution {
public:
    void reverseString(string& stringToReverse) {
        int i = 0, j = stringToReverse.length()-1;

        while (i < j) {
            swap(stringToReverse[i], stringToReverse[j]);
            i++;
            j--;
        }
    }

    string getSubstring(const string& substringFrom, int pos, int length) {
        if (length+pos > substringFrom.length()) return "";

        string substring = "";

        for (int i = 0; i < length; i++) {
            substring += substringFrom[pos+i];
        }

        return substring;
    }

    bool isSubstringPresent(string s) {
        string original = s;
        string reversed = s;

        reverseString(reversed);

        for (int i = 0; i < original.length()-1; i++) {
            string substring = getSubstring(original, i, 2);
            
            if (reversed.find(substring) != string::npos) return true;
        }

        return false;
    }
};

// class Solution {
// public:
//     bool isSubstringPresent(string s) {
//         string original = s;
//         string reversed = s;

//         reverse(reversed.begin(), reversed.end());

//         for (int i = 0; i < original.length()-1; i++) {
//             string substring = original.substr(i, 2);
//             if (reversed.find(substring) != string::npos) return true;
//         }

//         return false;
//     }
// };
