#include<stdio.h>
#include<conio.h>
void increment ();
int i;
int main()
          {
          clrscr();
          printf("\n i= %d " ,i);
          increment();
          increment();
          increment();
          printf("\n i= %d " ,i);
          
          getch ();
              return 0;
          }
void increment()
           {
           auto int j=10;
           static int k=20;
           register int l=30;
           i++;
           j++;
           k++;
           l++;
           printf("\n j= %d " ,j);
           printf("\n k= %d " ,k);
           printf("\n l= %d " ,l);
           printf("\n i= %d " ,i);
           }