class Solution {
public:
    bool checkA(const string& word) { // All letters are lower
        for (const char& i: word) {
            if (!islower(i)) return false;
        }

        return true;
    }

    bool checkB(const string& word) { // All letters are UPPER
        for (const char& i: word) {
            if (!isupper(i)) return false;
        }

        return true;
    }

    bool checkC(const string& word) { // First letter is UPPER and other are lower
        if (isupper(word[0])) {
            for (int i = 1; i < word.length(); i++) {
                if (!islower(word[i])) return false;
            }

            return true;
        }

        return false;
    }

    bool detectCapitalUse(string word) {
        return checkA(word) || checkB(word) || checkC(word);
    }
};
