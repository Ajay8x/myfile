#include<stdio.h>
#include<conio.h>

int main()
{
 
int a;
clrscr();

    printf("enter one integers number");
    scanf("%d",&a);
   
    if(a%2!=0)
    {
    printf(" odd number %d",a);
    
    }
    
    else{
    printf(" ev number %d",a);
    }
    getch();
    return 0;
}