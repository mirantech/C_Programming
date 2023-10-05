#include<stdio.h>
main()
{
int i,j,n,a[30],temp;
printf("Enter the no.of elements:");
scanf("%d",&n);
printf("Enter the elements:");
for(i=1;i<=n;i++)
{
scanf("%d",&a[i]);
}
printf("Sorted is");
for(i=1;i<=n;i++)
{
for(j=i+1;j<=n;j++)
{
if(a[j]>a[i])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
printf("\t %d",a[i]);
}
printf("\t Temp value is %d",temp);
}

