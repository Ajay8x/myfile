#include<stdio.h>

    int main()
    {
    int a[]={72,65,80,80,89};
    int b[]={79,76,73};
    int i,j;
    int lengths,length;
    lengths=sizeof(a)/sizeof(a[0]);

    length=sizeof(b)/sizeof(b[0]);
    for(i=0;i<lengths;i++)
    {
        printf(" %c ",a[i]);

    }
for(j=0;j<length;j++)
    {
        printf("\n %c ",b[j]);

    }
return 0;
}