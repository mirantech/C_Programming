#include<stdio.h>
main()
{
    double x,y,z;
    printf("Enter the Base value:");
    scanf("%lf",&x);
    printf("Enter the Power value:");
    scanf("%lf",&y);
    z=pow(x,y);
    printf("%.2lf",z);
}
