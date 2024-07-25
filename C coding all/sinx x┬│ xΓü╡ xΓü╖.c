#include <stdio.h>
#include <conio.h>

int main() {
    float x,sinx,t;
    int n,f=1,i;
    clrscr ();
    printf("\n enter x for sinx :");
    scanf("%f",&x);
    printf("enter of number terms");
    scanf("%d",&n);
    t=x;
    sinx=x;
    for(i=1;i<2*n;i=i+2)
    {t=t*(-i)*x*x;
    f=f*(i+1)*(i+2);
    sinx=sinx+t/f;
    }
    printf("sin(%f)=%f",x,sinx);
    

    getch();
    return 0;
}