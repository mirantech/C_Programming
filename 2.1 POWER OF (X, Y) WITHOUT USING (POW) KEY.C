#include<stdio.h>
int main()
{
    int base,pow,res=1,exp,b;
    printf("Enter the base value:");
    scanf("%d",&base);
    printf("Enter the power value:");
    scanf("%d",&pow);
    b=base;
    exp=pow;
    printf("The power of %d^%d=",b,exp);
    while(pow>0)
    {
        res=res*base;
        pow--;
    }
    printf("%d",res);
}
