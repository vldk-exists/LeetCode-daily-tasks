/*
Given a string array words, return an array of all characters that show up in all strings within the words (including duplicates). You may return the answer in any order.
*/

class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<unordered_map<char, int>> b;
        
        for (const string& word : words) {
            unordered_map<char, int> a;
            for (char ch : word) {
                a[ch]++;
            }
            b.push_back(a);
        }

        vector<string> c;

        for (const auto& pair : b[0]) {
            char key = pair.first;
            vector<int> z;
            bool all_have = true;

            for (const auto& m : b) {
                if (m.find(key) != m.end()) {
                    z.push_back(m.at(key));
                } else {
                    all_have = false;
                    break;
                }
            }

            if (all_have) {
                int min_count = *min_element(z.begin(), z.end());
                for (int i = 0; i < min_count; ++i) {
                    c.push_back(string(1, key));
                }
            }
        }

        return c;
    }
};
