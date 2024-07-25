#include<stdio.h>
#include<conio.h>

int main()
{
int a,b;
clrscr();
printf("\n enter two integers");
scanf("%d%d",&a,&b);
printf("\n a=%d,b=%d",a,b);

a=a*b;
b=a/b;
a=a/b;
printf("a=%d,b=%d",a,b);
getch();
return 0;
}