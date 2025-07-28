#include<stdio.h>
#include<limits.h>
#include<float.h>
void main()
{
    printf("The size of integer is:%zu\n",sizeof(int));
    printf("The size of character is:%zu\n",sizeof(char));
    printf("The size of unsigned integer is:%zu\n",sizeof(unsigned int));
    printf("The size of long is:%zu\n",sizeof(long));
    printf("The size of unsigned long is:%zu\n",sizeof(unsigned long));
    printf("The size of long long is:%zu\n",sizeof(long long));
    printf("The size of unsigned long long is:%zu\n",sizeof(unsigned long long));
    printf("The size of float is:%zu\n",sizeof(float));
    printf("The size of double is:%zu\n",sizeof(double));
    printf("The size of long double is:%zu\n",sizeof(long double));
    printf("Ranges of various data types\n");
    printf("The range of integer is:%d to %d\n",INT_MIN,INT_MAX);
    printf("The range of character is:%d to %d\n",CHAR_MIN,CHAR_MAX);
    printf("The range of unsigned integer is:%0 to %u\n",UINT_MAX);
    printf("The range of long is:%ld to %ld\n",LONG_MIN,LONG_MAX);
    printf("The range of unsigned long is:0 to %d\n",ULONG_MAX);
    printf("The range of long long is:%11d to 11%d\n",LLONG_MIN,LLONG_MAX);
    printf("The range of float is:%e to %e\n",FLT_MIN,FLT_MAX);
    printf("The range of double is:%e to %e\n",DBL_MIN,DBL_MAX);
    printf("The range of long double is:%Le to %Le\n",LDBL_MIN,LDBL_MAX);
    printf("This program is prepared by Shakshi Chaudhary 25TCE9EY");
}
