#include<stdio.h>
#include<conio.h>
long fact (long);
 long main()
{ long x,f;
clrscr();
printf(" enter an integers");
scanf("%ld",&x);
f=fact(x);
printf("factorial of %ld  is %ld",x,f);


getch();
return 0;
}
 long fact(long n)
{
if (n<=1)
return 1;
else
 return n*fact(n-1);
 
}