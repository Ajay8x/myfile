#include<stdio.h>
#include<conio.h>
int fact (int);
int main()
{ int x,f;
clrscr();
printf(" enter an integers");
scanf("%d",&x);
f=fact(x);
printf("factorial of %d is %d",x,f);


getch();
return 0;
}
int fact( int n)
{
if (n<=1)
return 1;
else
 return n*fact(n-1);
 
}