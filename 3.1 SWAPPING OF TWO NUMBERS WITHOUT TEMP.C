#include<stdio.h>
main()
{
int a,b;
printf("Enter the value of a:");
scanf("%d",&a);
printf("Enter the value of b:");
scanf("%d",&b);
printf("\nBefore swapping a:%d___________b:%d",a,b);
    a=a+b;    // a=5+6;   a=11
    b=a-b;    // b=11-6;  b=5
    a=a-b;    // a=11-5;  a=6
printf("\nAfter swapping a: %d___________b:%d",a,b);
}
