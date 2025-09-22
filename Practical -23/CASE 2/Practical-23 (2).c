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
    int prices[] = {10, 8, 6, 4, 2, 1};
    int n = sizeof(prices)/sizeof(prices[0]);

    // Prices keep decreasing, so no opportunity to make profit
    int profit = maxProfit(prices, n);
    printf("Test Case 2 - Maximum Profit: %d\n", profit);

    return 0;
}
