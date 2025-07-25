#include<stdio.h>
int main()
{
    int Num;
    //Num=10;
    printf("Enter the Number: ");
    scanf("%d" ,&Num);
    printf("This is Number %d",&Num);
    printf("The size of integer is: %d",sizeof(int));
    printf("The size of character is: %d",sizeof(char));
    printf("The size of float is: %d",sizeof(float));
    return 0;
}
