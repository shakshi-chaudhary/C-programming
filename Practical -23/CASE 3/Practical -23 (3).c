#include <stdio.h>

int maxProfit(int prices[], int n) {
    int min_price = prices[0];
    int max_profit = 0;

    for (int i = 1; i < n; i++) {
        if (prices[i] < min_price) {
            min_price = prices[i];
        } else {
            int profit = prices[i] - min_price;
            if (profit > max_profit) {
                max_profit = profit;
            }
        }
    }

    return max_profit;
}

int main() {
    int prices[] = {100, 180, 260, 310, 40, 535, 695};
    int n = sizeof(prices)/sizeof(prices[0]);

    // Buy at 40 (day 5), sell at 695 (day 7), max profit = 655
    int profit = maxProfit(prices, n);
    printf("Test Case 3 - Maximum Profit: %d\n", profit);

    return 0;
}
