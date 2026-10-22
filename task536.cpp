/*
You are keeping the scores for a baseball game with strange rules. At the beginning of the game, you start with an empty record.

You are given a list of strings operations, where operations[i] is the ith operation you must apply to the record and is one of the following:

    - An integer x.
        -- Record a new score of x.
    - '+'.
        -- Record a new score that is the sum of the previous two scores.
    - 'D'.
        -- Record a new score that is the double of the previous score.
    - 'C'.
        -- Invalidate the previous score, removing it from the record.

Return the sum of all the scores on the record after applying all the operations.

The test cases are generated such that the answer and all intermediate calculations fit in a 32-bit integer and that all operations are valid.
*/

class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> records;

        for (const string& operation: operations) {
            if (operation == "+") {
                int sum = records[records.size()-1] + \
                          records[records.size()-2];
                records.push_back(sum);
            } else if (operation == "D") {
                records.push_back(records[records.size()-1]*2);
            } else if (operation == "C") {
                records.pop_back();
            } else
                records.push_back(stoi(operation));
        }

        return accumulate(records.begin(), records.end(), 0);
    }
};
