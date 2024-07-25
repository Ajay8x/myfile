#include<stdio.h>
#include<conio.h>


int main()
{ 

float a,b,c,d ;

    printf("\n enter three integers");
    scanf("%f%f%f",&a,&b,&c);
    d=a*b*c/100;
    printf("\nsimple= %f",d);
    getch();
    return 0;
}