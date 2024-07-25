#include<stdio.h>



int main()

{

int i,x,fact;

printf("\n enter an integer");

scanf("%d",&x);

for(i=x;i>=1;i--);

{

fact=fact*i;

printf("\n %d%d",x,fact);

}



return 0;

}