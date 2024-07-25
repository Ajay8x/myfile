

#include<stdio.h>
#include<conio.h>

int main()

{

static int count =5;

printf("\n %d", count);

count --;

if(count!=0)

{

main();

}

getch();

return 0;

}