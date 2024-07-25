#include<stdio.h>
#include<conio.h>
int main()

{
int i,j,n;
  clrscr();
    printf("\n enter a line of number");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {printf("\n");
    for(j=1;j<=i;j++)
    {printf("*");
    }
    }
    
    getch();
    return 0;
}