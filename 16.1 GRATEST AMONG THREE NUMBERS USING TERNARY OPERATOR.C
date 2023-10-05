#include<stdio.h>
main()
{
    int a,b,c,res;
    printf("Enter the value for a,b,c:");
    scanf("%d %d %d",&a,&b,&c);
    res=(a>b&&a>c)?a:((b>c)?b:c);
    printf("The Gratest Among the three number is %d",res);
}


