#include<stdio.h>
main()
{
int i,n,count=0;
printf("Enter the number:");
scanf("%d",&n);
if(n==0||n==1)
{
printf("It is not a prime number");
}
else
{
for(i=1;i<=n;i++)
{
if(n%i==0)
{
count++;
}
}
if(count==2)      // Count==2 bcz here prime can divide by 2 number only (i.e) it divide by 1 and it divide by itself (if n=5 it can divide by 1 and 5), So it can count++ (count==2)
{
printf("It is a prime number");
}
else
{
printf("It is not a prime number");
}
}
}

