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
    int prices[] = {30, 20, 25, 40, 25, 50, 35};
    int n = sizeof(prices)/sizeof(prices[0]);

    // Buy at 20 (day 2), sell at 50 (day 6), profit = 30
    int profit = maxProfit(prices, n);
    printf("Test Case 4 - Maximum Profit: %d\n", profit);

    return 0;
}
