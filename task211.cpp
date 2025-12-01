/*
You are given an integer array score of size n, where score[i] is the score of the ith athlete in a competition. All the scores are guaranteed to be unique.

The athletes are placed based on their scores, where the 1st place athlete has the highest score, the 2nd place athlete has the 2nd highest score, and so on. The placement of each athlete determines their rank:

    - The 1st place athlete's rank is "Gold Medal".
    - The 2nd place athlete's rank is "Silver Medal".
    - The 3rd place athlete's rank is "Bronze Medal".
    - For the 4th place to the nth place athlete, their rank is their placement number (i.e., the xth place athlete's rank is "x").

Return an array answer of size n where answer[i] is the rank of the ith athlete.
*/

class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        const int n = score.size();
        
        set<int> a(score.begin(), score.end());

        vector<string> result;
        for (const int& i: score) {
            const auto& it = a.find(i);
            int rank = n - distance(a.begin(), it) - 1;
            if (rank == 0) result.push_back("Gold Medal");
            else if (rank == 1) result.push_back("Silver Medal");
            else if (rank == 2) result.push_back("Bronze Medal");
            else result.push_back(to_string(rank+1)); 
        }

        return result;
    }
};
