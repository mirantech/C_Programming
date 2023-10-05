#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,len;
    char a[10];
    printf("Enter the String:");
    scanf("%s",&a);      //%s is used for the string 
    len=strlen(a);
    for(i=len-1;i>=0;i--)
    {
        printf("%c",a[i]);   //%c is used for character bcz(len(-1),so it it will give last char of string)
    }
}
