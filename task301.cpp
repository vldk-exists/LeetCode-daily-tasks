/*
For two strings s and t, we say "t divides s" if and only if s = t + t + t + ... + t + t (i.e., t is concatenated with itself one or more times).

Given two strings str1 and str2, return the largest string x such that x divides both str1 and str2.
*/

class Solution {
public:
    int getGCD(int a, int b) {
        while (a > 0 && b > 0) {
            if (a > b) {
                a -= b;
            } else {
                b -= a;
            }
        }
        if (a == 0) return b;
        return a;
    }

    string gcdOfStrings(string str1, string str2) {
        // if (str1 == "AABB" && str2 == "AB") return ""; // One test case :(


        // while (!str1.empty() && !str2.empty()) {
        //     if (str1.length() > str2.length()) {
        //         size_t pos = str1.find(str2);
        //         if (pos != string::npos) {
        //             str1.erase(pos, str2.length());
        //         } else return "";
        //     } else {
        //         size_t pos = str2.find(str1);
        //         if (pos != string::npos) {
        //             str2.erase(pos, str1.length());
        //         } else return "";
        //     }
        // }

        // if (str1.empty()) return str2;
        // return str1;

        if (str1 + str2 == str2 + str1) {
            int length = getGCD(str1.length(), str2.length());

            return str1.substr(0, length);
        }
        return "";
    }
};
