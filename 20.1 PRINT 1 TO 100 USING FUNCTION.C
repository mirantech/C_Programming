#include<stdio.h>
int result(int n) //Fuction Definition
{
if(n<=100)
{
printf("\t%d",n);
result(n+1);   //Fuction Call
}
}
int main()
{
int a=1;
result(a);   //Fuction Call
}
