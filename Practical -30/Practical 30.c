#include <stdio.h>
#include <stdlib.h>

void sortPrices(float *prices, int n)
 {
    float temp;
    for (float *i = prices; i < prices + n - 1; i++)
        {
        for (float *j = i + 1; j < prices + n; j++)
         {
            if (*i > *j)
             {
                temp = *i;
                *i = *j;
                *j = temp;
            }
        }
    }
}

int main()
 {
    int n;
    printf("Enter number of items: ");
    if (scanf("%d", &n) != 1 || n < 0)
        {
        printf("Error: Invalid number of items.\n");
        return 1;
    }

    if (n == 0)
        {
        printf("Error: No items to sort.\n");
        return 1;
    }

    float *prices = (float *)malloc(n * sizeof(float));
    if (prices == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter %d prices: ", n);
    for (int i = 0; i < n; i++) {
        if (scanf("%f", prices + i) != 1)
            {
            printf("Error: Invalid input for price. Please enter numeric values only.\n");
            free(prices);
            return 1;
        }
    }

    sortPrices(prices, n);

    printf("Sorted Prices: ");
    for (int i = 0; i < n; i++)
        {
        printf("%.2f", *(prices + i));
        if (i < n - 1) printf(", ");
    }
    printf("\n");

    free(prices);
    printf("\nShakshiChaudhary_25CE014\n");
    return 0;
}

