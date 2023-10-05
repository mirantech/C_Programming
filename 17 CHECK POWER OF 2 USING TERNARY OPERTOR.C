#include<stdio.h>
main()
{
int n;
printf("Enter the number:");
scanf("%d",&n);
(n&(n-1))==0?printf("It is power of 2"):printf("It is not a power of 2");
}

