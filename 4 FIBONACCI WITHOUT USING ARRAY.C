#include<stdio.h>
main()
{
int n,a=0,b=1,c;
printf("Enter the number:");
scanf("%d",&n);
n=n-2;
printf("The Fibonacci number %d %d ",a,b);
while(n>0)
{
c=a+b;
a=b;
b=c;
printf("%d ",c);
n--;
}
}
