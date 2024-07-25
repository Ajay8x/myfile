#include<stdio.h> 
#include<conio.h>
int main()
{
int a,b,c;
clrscr();
printf("\n enter three numder");
scanf("%d%d%d", &a, &b, &c);
if((a>b)&&(a>c))
{ 
printf("\n max number is %d",a);
 }
if((b>a)&&(b>c))
{
printf("\n max number is %d",b);
}
if((c>a)&&(c>b))
{
printf("\n max number is%d",c);
}
 getch(); 
 return 0;
 }