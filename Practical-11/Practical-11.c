#include<stdio.h>
int main()
{
    int Marks;
    printf("Enter Your Marks");
    scanf("%d",&Marks);
    if (Marks<0 || Marks>100)
    {
        printf("Enter The Valid Marks");
    }
    else
    (Marks>=90)? printf("Grade A"):
    (Marks>=80 && Marks<90)? printf("Grade B"):
    (Marks>=70 && Marks<80)? printf("Grade C"):
    (Marks>=60 && Marks<70)? printf("Grade D"): printf("Grade F");
    return 0;
}
