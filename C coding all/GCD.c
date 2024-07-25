#include<stdio.h>
#include<conio.h>

int main()
{ int n1,n2,i,gcd;

    printf(" enter two numbers n1 n2");
    scanf("\n %d  %d",&n1,&n2);
    i=1;
    while((i<=n1) &&(i<=n2))
    
    {
    if((n1%i==0)&&(n2%i==0))
    gcd=i;
    }
    printf(" \n GCD of and %d and %d is %d ",n1,n2,gcd);
    getch();
    return 0;
}