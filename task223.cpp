/*
You are given three arrays of length n that describe the properties of n coupons: code, businessLine, and isActive. The ith coupon has:

    - code[i]: a string representing the coupon identifier.
    - businessLine[i]: a string denoting the business category of the coupon.
    - isActive[i]: a boolean indicating whether the coupon is currently active.

A coupon is considered valid if all of the following conditions hold:

    - code[i] is non-empty and consists only of alphanumeric characters (a-z, A-Z, 0-9) and underscores (_).
    - businessLine[i] is one of the following four categories: "electronics", "grocery", "pharmacy", "restaurant".
    - isActive[i] is true.

Return an array of the codes of all valid coupons, sorted first by their businessLine in the order: "electronics", "grocery", "pharmacy", "restaurant", and then by code in lexicographical (ascending) order within each category.
*/

const set<string> businessLinesSet = {
    "electronics",
    "grocery",
    "pharmacy",
    "restaurant"
};

bool checkCode(const string& code) {
    if (code.empty()) return false;
    for (const unsigned char& i: code) {
        if (!isdigit(i) && !isupper(i) && !islower(i) && i != '_') return false;
    }
    return true;
}

bool checkBusinessLine(const string& code) {
    return (businessLinesSet.find(code) != businessLinesSet.end());
}

class Solution {
public:
    vector<string> validateCoupons(vector<string>& codes, vector<string>& businessLines, vector<bool>& isActive) {
        const int n = codes.size();

        map<string, vector<string>> codesMap = {
            {"electronics", {}},
            {"grocery", {}},
            {"pharmacy", {}},
            {"restaurant", {}}
        };

        for (int i = 0; i < n; i++) {
            if (checkCode(codes[i]) && \
                checkBusinessLine(businessLines[i]) && \
                isActive[i]) {
                    codesMap[businessLines[i]].push_back(codes[i]);
                }
        }

        for (auto& i: codesMap) {
            sort(i.second.begin(), i.second.end());
        }

        vector<string> result;
        for (const auto& i: codesMap) {
            for (const string& j: i.second) result.push_back(j);
        }

        return result;
    }
};
