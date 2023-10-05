#include<stdio.h>
main()
{
int i,j,x;
printf("how many lines stars(*) should be printed ? : ");
scanf("%d",&x);
for(i=1;i<=x;i++)
{
for(j=1;j<=i;j++)
{
printf("*");
}
printf("\n");
}
}
