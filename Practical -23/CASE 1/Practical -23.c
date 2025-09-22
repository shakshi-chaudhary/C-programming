#include <stdio.h>

int maxProfit(int prices[], int n)
{
    int maxProfit = 0;

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            int profit = prices[j] - prices[i];
            if (profit > maxProfit)
            {
                maxProfit = profit;
            }
        }
    }

    return maxProfit;
}

int main() {
    // Test Case 1
    int prices1[] = {20, 25, 15, 30, 10, 50};
    int n1 = sizeof(prices1) / sizeof(prices1[0]);
    printf("Test Case 1: Maximum Profit: %d\n", maxProfit(prices1, n1));
    return 0;
}
