#include<stdio.h>
int a,s,d,m;
void sum(int b,int c)
{
a=b+c;
s=b-c;
d=b/c;
m=b*c;
printf("\n sum =%d ",a);
printf("\n sub = %d",s);
printf("\n div = %d",d);
printf("\n multi= %d",m);
}
void main()
{
    int arr[]={4,5,7,8,5,54,};
    sum(arr[5],arr[0]);
}