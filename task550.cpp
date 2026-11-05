/*
There is a special typewriter with lowercase English letters 'a' to 'z' arranged in a circle with a pointer. A character can only be typed if the pointer is pointing to that character. The pointer is initially pointing to the character 'a'.

Each second, you may perform one of the following operations:

    - Move the pointer one character counterclockwise or clockwise.
    - Type the character the pointer is currently on.

Given a string word, return the minimum number of seconds to type out the characters in word.
*/

class Solution {
public:
    int minTimeToType(string word) {
        char pointer = 'a';

        int time = 0;

        for (const char& i: word) {
            if (i != pointer) {
                int a = abs(pointer - i);
                int b = i > pointer
                ? ('z' - i) + (pointer - 'a') + 1
                : ('z' - pointer) + (i - 'a') + 1;
                
                time += min(a,b);
            }

            pointer = i;

            ++time;
        }

        return time;
    }
};
