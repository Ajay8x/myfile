#include<stdio.h>
#include<conio.h>
int main(){
float x,sum=1,f=1,y=1,j=-1;
int i,n;
clrscr ();
printf("enter x ,n ");
scanf("%f%d",&x,&n);
for(i=1;i<=n;i++)
{y=y*x;
f=f*i;
sum=sum+j*y/f;
j=j*i;
}
printf("exponential series %f",sum);

getch ();
return 0;
}