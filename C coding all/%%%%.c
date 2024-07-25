#include<stdio.h>
#include<conio.h>
int main ()
{
float s1,s2,s3,s4,s5;
float per ;
int sum;
clrscr();
printf("\n enter markes for five subject:");
scanf("%f%f%f%f%f",&s1,&s2,&s3,&s4,&s5);
per=(s1+s2+s3+s4+s5)/5;
sum=s1+s2+s3+s4+s5;
printf("\ntotle number%d",sum);
{printf("\n total subject percentage%f",per);}
if(per>=60){
printf("\nfirst division");
}
if((per>=45)&&(per<60))
{printf("\nsecond division");}
if((per>=33)&&(per<45))
{printf("\nthird division");}
if(per<33)
{printf("fail");}

getch();
return 0;
}