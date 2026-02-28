/*

				/300 day anniversary!/

You are given a string word that consists of digits and lowercase English letters.

You will replace every non-digit character with a space. For example, "a123bc34d8ef34" will become " 123  34 8  34". Notice that you are left with some integers that are separated by at least one space: "123", "34", "8", and "34".

Return the number of different integers after performing the replacement operations on word.

Two integers are considered different if their decimal representations without any leading zeros are different.
*/

string eraseLeadingZeros(const string& num) {
    bool a = false;
    
    string result = "";
    for (const char& i: num) {
        if (i != '0') a = true;
        if (a) {
            result += i;
        }
    }
    
    return result;
}

class Solution {
public:
    int numDifferentIntegers(string word) {
        set<string> nums;

        string buffer;
        for (const char& i: word) {
            if (!isdigit(i)) {
                if (!buffer.empty()) {
                    nums.insert(eraseLeadingZeros(buffer));
                    buffer = ""; 
                }
            } else buffer += i;
        }

        if (!buffer.empty()) nums.insert(eraseLeadingZeros(buffer));
        
        return nums.size();
    }
};
