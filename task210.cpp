/*
In a town, there are n people labeled from 1 to n. There is a rumor that one of these people is secretly the town judge.

If the town judge exists, then:

    1. The town judge trusts nobody.
    2. Everybody (except for the town judge) trusts the town judge.
    3. There is exactly one person that satisfies properties 1 and 2.

You are given an array trust where trust[i] = [ai, bi] representing that the person labeled ai trusts the person labeled bi. If a trust relationship does not exist in trust array, then such a trust relationship does not exist.

Return the label of the town judge if the town judge exists and can be identified, or return -1 otherwise.
*/

class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        if (trust.size() == 0) {
            if (n == 1) return 1;
        } else {
            unordered_map<int, unordered_set<int>> pMap;

            for (const vector<int>& i: trust) {
                pMap[i[0]].insert(i[1]);
            }

            int result = -1;
            for (int i = 1; i <= n; i++) {
                if (pMap.find(i) == pMap.end()) {
                    if (result < 0) {
                        bool isEverywhere = true;
                        for (const auto& j: pMap) {
                            if (j.second.find(i) == j.second.end()) {
                                isEverywhere = false;
                                break;
                            }
                        }


                        if (isEverywhere) result = i;
                    } else return -1;
                }
            }

            return result;
        }

        return -1;
    }
};
