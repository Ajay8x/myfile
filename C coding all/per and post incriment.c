#include<stdio.h>
#include<conio.h>
int main()
{
   int x=4,y=3,z;
    z=y++ + --x + y-- + ++x;
    printf("%d %d %d",x,y,z);
    getch();
    return 0;
 }