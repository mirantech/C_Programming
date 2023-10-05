#include<stdio.h>
void swap(int *x,int *y)
{
int temp;
temp=*x;       (* operator is used to pointer, it assign other value)
*x=*y;
*y=temp;
}
int main()
{
int a,b;
printf("Enter the number:");
scanf("%d %d",&a,&b);
printf("\nBefore swap A: %d   | B: %d",a,b);
swap(&a,&b);
printf("\nAfter swap A: %d    | B: %d",a,b);
return 0;
}