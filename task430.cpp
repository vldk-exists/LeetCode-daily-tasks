/*
You are given two positive integers x and y, denoting the number of coins with values 75 and 10 respectively.

Alice and Bob are playing a game. Each turn, starting with Alice, the player must pick up coins with a total value 115. If the player is unable to do so, they lose the game.

Return the name of the player who wins the game if both players play optimally.
*/

class Solution {
public:
    string winningPlayer(int x, int y) {
        // bool player = 1; // 1 - Alice; 0 - Bob;

        // while (x > 0 && y >= 4) {
        //     --x;
        //     y -= 4;
        //     player = !player;
        // }

        // if (!player) return "Alice";
        // return "Bob";
        
        y = y / 4;

        if (min(x, y) % 2 == 0) return "Bob";
        return "Alice";
    }
};
