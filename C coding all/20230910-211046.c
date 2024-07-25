#include<stdio.h>
#include<conio.h>
int main()
{
	int i=1,j,k,l=1,n;
	clrscr();
    printf("enter an lines of number");
    scanf("%d",&n);
	for(i=1;i<=n;i++)
	{printf("\n");
		for(j=1;j<=n-i;j++)
		{
			printf(" ");
		}
		for(k=i;k>=1;k--)
		{
			printf(" %d",l);
            l++;
		}
		
	}
	getch();
    return 0;
    }