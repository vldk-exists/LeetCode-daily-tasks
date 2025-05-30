/*
You are given a 0-indexed integer array nums of size 3 which can form the sides of a triangle.

    A triangle is called equilateral if it has all sides of equal length.
    A triangle is called isosceles if it has exactly two sides of equal length.
    A triangle is called scalene if all its sides are of different lengths.

Return a string representing the type of triangle that can be formed or "none" if it cannot form a triangle.
*/

class Solution {
public:
    string triangleType(vector<int>& nums) {
        int a, b, c, ab, bc, ac;
        a = nums.at(0);
        bc = nums.at(1) + nums.at(2);
        b = nums.at(1);
        ac = nums.at(0) + nums.at(2);
        c = nums.at(2);
        ab = nums.at(0) + nums.at(1);

        if (a < bc && b < ac && c < ab) {
            set<int> s(nums.begin(), nums.end());
            if (s.size() == 3) {
                return "scalene";
            } else if (s.size() == 2) {
                return "isosceles";
            } else {
                return "equilateral";
            }
        }
        return "none";
    }
};
