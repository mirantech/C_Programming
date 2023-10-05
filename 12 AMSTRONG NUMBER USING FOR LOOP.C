#include<stdio.h>
main()
{
    int n,n2,arm=0,rem,i;
    printf("Enter the Three Digit Numer:");
    scanf("%d",&n);
    n2=n;
    for(i=n;i>0;i=i/10)
    {
        rem=i%10;
        arm=arm+(rem*rem*rem);
    }
    if(arm==n2)
    {
        printf("\n%d is AMSTRONG NUMBER",arm);
    }
    else
    {
        printf("\n%d is not a AMSTRONG NUMBER",n);
    }
}
