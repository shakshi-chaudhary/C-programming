#include<stdio.h>
#define ticket 200
void main()
{
    int age,amount,discountfair,fair;
    amount = 250;
    discountfair =("fair - fair*10/100");
    printf("Enter Your Age:\n");
    scanf("%d",&age);
    if (age<12)
    {
    printf("You are eligible for free entery\n");
    }
    else if (age>=12 & age<60)
    {
        int no_people;
        printf("Enter the number of people with age in range between 12 to 60:");
        scanf("%d",&no_people);
        printf("You have to Pay the fair of rupees %d", fair*no_people);
    }
    else
    {
        printf("You have to pay = %d Rupees",discountfair);
    }
    return 0;
}




