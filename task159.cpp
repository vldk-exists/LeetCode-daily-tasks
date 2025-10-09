/*
You are given an integer n representing the number of players in a game and a 2D array pick where pick[i] = [xi, yi] represents that the player xi picked a ball of color yi.

Player i wins the game if they pick strictly more than i balls of the same color. In other words,

    Player 0 wins if they pick any ball.
    Player 1 wins if they pick at least two balls of the same color.
    ...
    Player i wins if they pick at least i + 1 balls of the same color.

Return the number of players who win the game.

Note that multiple players can win the game.
*/

class Solution {
public:
    unordered_map<int, unordered_map<int, int>> playerMap;

    void initPlayerMap(int n) {
        for (int i = 0; i < n; i++) {
            unordered_map<int, int> colorMap;
            for (int j = 0; j <= 10; j++) colorMap[j] = 0;
            playerMap[i] = colorMap;
        }
    } 

    int winningPlayerCount(int n, vector<vector<int>>& pick) {
        initPlayerMap(n);
        int count = 0;

        for (int i = 0; i < pick.size(); i++) {
            int x = pick[i][0];
            int y = pick[i][1];

            if (playerMap.find(x) != playerMap.end()) playerMap[x][y]++;
        }

        for (int i = 0; i < n; i++) {
            const auto& j = playerMap[i];
            for (const auto& k: j) {
                if (k.second > i) {
                    count++;
                    break;
                }
            }
        }

        return count;
    }
};
