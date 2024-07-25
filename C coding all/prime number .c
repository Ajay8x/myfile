#include<stdio.h>
#include<conio.h>
int main()
{
int x,i, f=1;
clrscr();
printf("\n enter any integers  number:");
scanf("%d",&x);
for(i=2;i<=x/2;i++) 
{
if(x%i==0) 

{f=0;}

}
if(f==1) 
printf("prime number");
else
printf("not prime number");
getch ();
return 0;
}