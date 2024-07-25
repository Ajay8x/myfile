#include<stdio.h>
#include<conio.h>
void increment();
int main()
{
clrscr();
increment();
increment();
increment();
getch();
return 0;
}

void increment()
{

   int i =0;
   register int j=0;
   static int k=0;
   i++;
   j++;
   k++;
printf("\n %d %d %d " ,i, j, k);


}