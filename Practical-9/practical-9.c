#include<stdio.h>
void main()
{

    int amount;
    printf("Enter the total amount :");
    scanf("%D",&amount);
    printf("\nYour total amount is : %d Rupees\n",amount);

    if (amount<=1000)
    {
        printf("Discount = 0 Rupees");
        printf("\nFinal amount after Discount is : %d Rupees",amount);
    }
    else if (amount>1000 && amount<=5000)
    {
        printf("Discount = %d Rupees",amount*10/100);
        printf("\nFinal amount after Discount is: %d Rupees",amount*(100-10)/100);
    }
    else
    {
        printf("Discount = %d Rupees",amount*20/100);
        printf("\nFinal amount after Discount is: %d Rupees",amount*(100-20)/100);
    }
    printf("This program is developed by shakshi chaudhary 25TCE9EY");
}
