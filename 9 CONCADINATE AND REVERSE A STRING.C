#include<stdio.h>
main()
{
    char n1[20],n2[20],n3;
    n3;	
    printf("Enter the String1:");
    scanf("%s",&n1);
    printf("\nEnter the String2:");
    scanf("%s",&n2);
    strcat(n1,n2);
    printf("\n%s",n1);        //Concadinate
    printf("\n%s",n2);
    strrev(n1);                // Reverse of Concadination
    printf("\n%s",n1);
} 
