#include<stdio.h>
#include<conio.h>

int main ()
{
char i;

printf("\n enter a charecter:");
scanf("%c",i);
switch(i)
{case 'a':printf(" I am case number 1");
printf("\n hello");
break;
case 'b':printf(" I am case number 2");
printf(" \nhello");
break;
case 'c':printf(" I am case number 10");
printf("\n hello");
break;
case 'd':printf(" I am case number 11");
printf("\n hello");
break;
case 'e':printf(" I am case number 50");
printf("  \n hello");
break;

default: printf(" no found");
 break;
}getch();
return 0;}