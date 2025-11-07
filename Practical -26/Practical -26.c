#include<stdio.h>
#include<math.h>
void collectinput();
void valid(int a, int b, int c);
int Area(int a, int b, int c);
int main()
{
    printf("Triangle validity and Area\n");
    collectinput();
    return 0;

}
void collectinput()
{
    int a,b,c;
    int A_R;
    printf("Enter the length of the three sides:\n");
    scanf("%d %d %d",&a,&b,&c);
    valid(a,b,c);

}
void valid(int a, int b, int c)
{
    if((a+b)>c || (b+c)>a || (a+c)>b)
    {
        printf("Valid Triangle!\n");
        printf("Area of Triangle is: %d",Area(a,b,c));
    }
    else
    {
        printf("Invalid Triangle!");
    }
}
int Area(int a, int b, int c)
{
    int s;
    s=(a+b+c)/2;
    int Area;
    Area=sqrt(s*(s-a)*(s-b)*(s-c));
    return Area;
}
