#include<stdio.h>

int main()
{
    FILE *fp;
    char ch;

    fp=fopen("Demo.txt","r");
    if(fp==NULL)
    {
        printf("File does not exists!\n ");
    }
    else
    {
        fseek(fp,-1,2);
        int size=ftell(fp)+1;
        while(size)
        {
            ch=getc(fp);
            printf("%c",ch);
            fseek(fp,-2,1);
            size--;
        }
    }
    fclose(fp);
    printf("\nHardiAgola_25CE002");
    return 0;
}
