#include<stdio.h>
main()
{
    int n,a[20],i;
    printf("Enter the number:");
    scanf("%d",&n);
    a[0]=0;
    a[1]=1;
    for(i=2;i<=n;i++)
    {
        a[i]=a[i-1]+a[i-2];
    }
    printf("The Binary number is:");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
 


