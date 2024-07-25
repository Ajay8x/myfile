#include<stdio.h>
#include<conio.h>
int main()
{
	int r,n,x,a;
    clrscr();
    for(x=1;x<=1000000;x++)
   { a=0;
    n=x;
    while(n>0)
    {
    r=n%10;
    a=a+(r*r*r);
    n=n/10;}
    if(a==x){printf("\n armstrong number%d",x);}
    }
	getch();
    return 0;
    }