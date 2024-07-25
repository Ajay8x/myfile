#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,k,l,n;
	clrscr();
    printf("enter an lines of number");
    scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
		{
			printf(" ");
		}
		for(k=i;k>=1;k--)
		{
			printf(" ");
		}
		printf("\n");
	}
	getch();
    return 0;
    }