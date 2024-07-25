#include<stdio.h>
#include<conio.h>

int main(){
int n,r,i,c;


printf(" Enter month code 2023 \n month code is\n Jun=6\nFEB=2\nMAR=2\nAPR=5\nMAY=7\nJUN=3\nJUL=5\nAug=1\nSep=4\noct=6\Nov=2\nDEC=4\n");
scanf("%d",&c);
printf(" Enter date\n");
scanf("%d",&n);
i=n+c;
r=i%7;

if(r==1)
{printf("MON");}
else if (r==2)
{printf("TUE");}
else if (r==3)
{printf("WEN");}
else if (r==4)
{printf("THU");}
else if (r==5)
{printf("FRI");}
else if(r==6)
{printf("SAT");}
else if (r==7)
{printf("SUN");}
getch();
return 0;
}