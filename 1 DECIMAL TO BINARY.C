#include<stdio.h>
main()
{
    int i,j,bin[30],n;
    printf("Enter the value:");
    scanf("%d",&n);
    i=0;
    while(n>0)
    {
        bin[i]=n%2;
        n/=2;        //n=n/2;
        i++;
    }
    //printf("%d",i);
    printf("The Binary Value:");
    for(j=i-1;j>=0;j--)
    {
        printf("%d",bin[j]);
    }
}
