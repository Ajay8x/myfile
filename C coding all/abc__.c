#include<stdio.h>
#include<conio.h>
int main()
{long a,b,c;
clrscr();
printf("\nenter Frist number   ");
scanf("%ld",&a);
printf("\nenter second number  ");
scanf("%ld",&b);
printf("\nenter third number  ");
scanf("%ld",&c);

if(a>b){if(a>c)
{printf("\nmax is  %ld",a);
}
else{
 printf("\n max is %ld",c);}}

if(b>a){if(b>c)
{printf("\nmax is  %ld",b);}
else{
 printf("\n max is %ld",c);
 }
 }

getch();
return 0;
}