#include<stdio.h>
main()
{
int i=1;
loop:
if(i<=100)
{
printf("\t%d",i);
i++;
goto loop;
}

}
