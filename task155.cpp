/*
Initially, you have a bank account balance of 100 dollars.

You are given an integer purchaseAmount representing the amount you will spend on a purchase in dollars, in other words, its price.

When making the purchase, first the purchaseAmount is rounded to the nearest multiple of 10. Let us call this value roundedAmount. Then, roundedAmount dollars are removed from your bank account.

Return an integer denoting your final bank account balance after this purchase.
*/

class Solution {
public:
    int accountBalanceAfterPurchase(int purchaseAmount) {
        int roundedAmount = 0;

        while (roundedAmount < purchaseAmount) {
            if (purchaseAmount - roundedAmount < 5) break;
            roundedAmount += 10;
        }

        return 100 - roundedAmount;
    }
};
