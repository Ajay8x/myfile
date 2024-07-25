#include<conio.h>
#include<stdio.h>
int main()

{ clrscr();
    float si,p,r,t;
    printf("\n enter p=principal");
    scanf("%f",&p);
    printf("\n enter r=rate");
    scanf("%f",&r);
    printf("\n enter t=time");
    scanf("%f",&t);
    si=p*t*r/100;
    printf("\n simple=%f",si);
    getch();
    return 0;
}