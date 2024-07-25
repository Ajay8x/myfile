#include<stdio.h>

int main()

{int sum=0,r,a;
    
    printf("\n enter a three digits number");
    scanf("%d",&a);
    r=a%10;
    sum=sum+r;
    a=a/10;
    r=a%10;
    sum=sum+r;
    a=a/10;
    sum=sum+a;
    printf("\n sum=%d",sum);
    return 0;
}