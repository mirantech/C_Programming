#include1<stdio.h>
main()
{
int i,n;
printf("Enter the number n:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
if(i%2==0)
{
continue;
}
else
{
printf("The odd numbers between given number is %d",i);
printf("\n");
}
