#include<stdio.h>
#include<conio.h>
void increment ();
void decrement ();
int i=10;
int main()
{clrscr ();
printf("\n %d",i);
increment();
increment();
decrement();
decrement();
getch ();
return 0;
}
void increment()
{
i++;
printf("\n %d",i);


}
void decrement()

{
i--;
printf("\n %d",i);


}