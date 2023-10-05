#include<stdio.h>
#include <stdio.h>
main()
{
int i,sum=0,n;
printf("Enter the number");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
if(n<0)
continue;
else
sum=sum+i;
}
printf("sum is %d",sum);
}
