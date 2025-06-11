/*
A sentence is a list of words that are separated by a single space with no leading or trailing spaces. Each of the words consists of only uppercase and lowercase English letters (no punctuation).

    For example, "Hello World", "HELLO", and "hello world hello world" are all sentences.

You are given a sentence s and an integer k. You want to truncate s such that it contains only the first k words. Return s after truncating it.
*/

vector<string> sp(string a, char b) {
    string c;
    vector<string> d;
    for (char i: a) {
        if (i == b) {
            d.push_back(c);
            c = "";
        } else {
            c += i;
        }
    }
    d.push_back(c);
    return d;
}
 
vector<string> sl(vector<string> a, int b) {
    vector<string> c;
    if (b <= a.size()) {
        for (int i = 0; i < b; i++) {
            c.push_back(a.at(i));
        }
        return c;
    }
    return a;
}

string j(vector<string> a, char b) {
    string c;
    for (int i = 0; i < a.size(); i++) {
        c += a.at(i);
        if (i != a.size()-1) {
            c += b;
        } 
    }
    return c;
}

class Solution {
public:
    string truncateSentence(string s, int k) {
        vector<string> f1 = sp(s, ' ');
        vector<string> f2 = sl(f1, k);
        string f3 = j(f2, ' ');

        return f3;
    }
};
