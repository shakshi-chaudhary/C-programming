#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    for(i=1;i<=(n/2)+1;i++)
    {
        for(j=1;j<=n;j++)
        {
        if(i==1)
        printf("%d",j);
        else if (i==j||i+j==n+1)
        printf("%d",j);
        else
        printf(" ");
    }
    printf("\n");
    }
return 0;
}
