#include<stdio.h>
void main()
{

    float weight,height,BMI;
    printf("Calculation of BMI\n");
    printf("Enter the value of your weight(in kg):\n");
    scanf("%f",&weight);
    printf("Enter the value of your height (in meters):\n");
    scanf("%f",&height);
    BMI=weight/(height*height);
    printf("\n your BMI is %f",BMI);
    {
        float BMI=17.6;
        if(BMI<18.5)
    {
        printf("you are under weight");
    }
    else if(BMI>=18.5 |BMI<24.9)
    {
        printf("You are healthy");
    }
    }
}



