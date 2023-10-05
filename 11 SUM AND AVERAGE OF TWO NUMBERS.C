#include<stdio.h>
main()
{
float n,i,sum=0,num,avg;
printf("Enter How amny numbers did you want:");
scanf("%f",&n);
for(i=1;i<=n;i++)
{
printf("Enter the number%.2f:",i);
scanf("%f",&num);
sum=sum+num;
}
avg=sum/n;
printf("%f",sum);
printf("\n Average number is %.2f",avg);
}
