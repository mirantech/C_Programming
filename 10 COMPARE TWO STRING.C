#include<stdio.h>
main()
{
    char n1[20],n2[20],n;
    printf("Enter the String1:");
    scanf("%s",&n1);
    printf("\nEnter the String2:");
    scanf("%s",&n2);
    n=strcmp(n1,n2);
    if(n==0)
    {
        printf("\nBoth are Equal Name");
    }
    else
    {
        printf("\nBoth are not equal");
    }
}
