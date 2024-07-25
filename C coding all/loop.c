#include<stdio.h>
#include<conio.h>



int main()

{

int i, x, f=1;
clrscr();

printf("\n enter an integer");

scanf("%d", &x);

for(i=x;i>=1;i--)

{

f=f*i;
}

printf("\n f of  %d is %d",x,f);




getch();
return 0;

}