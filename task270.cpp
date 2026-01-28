/*
You are given an array of distinct integers arr and an array of integer arrays pieces, where the integers in pieces are distinct. Your goal is to form arr by concatenating the arrays in pieces in any order. However, you are not allowed to reorder the integers in each array pieces[i].

Return true if it is possible to form the array arr from pieces. Otherwise, return false.
*/

class Solution {
public:
    bool canFormArray(vector<int>& arr, vector<vector<int>>& pieces) {
        map<int, int> indexMap;

        for (int i = 0; i < arr.size(); i++) {
            indexMap[arr[i]] = i;
        }

        for (const vector<int>& piece: pieces) {
            const auto& it1 = indexMap.find(piece[0]);
            if (it1 != indexMap.end()) {
                int index = it1->second;
                for (int j = 1; j < piece.size(); j++) {
                    const auto& it2 = indexMap.find(piece[j]);
                    if (it2 == indexMap.end() || \
                        it2->second != ++index) return false;
                }
            } else return false;
        }

        return true;
    }
};
