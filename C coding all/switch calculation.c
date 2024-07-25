#include<stdio.h>
#include<conio.h>

int main()
{
int i;
clrscr ();

    printf(" Enter \n 1..10(+) , 11..20(-) , 21...30(*),31...40(/) \n");
    scanf("%d",&i);
    switch(i){
    
    case 1 ... 10 : printf("+ add :");
    int a,b,c;
   scanf("%d%d",&a,&b);
    c=a+b;
    printf( " \n answer : %d ",c);
    
     break;
    
    case 11 ... 20 : printf("\n- sub :");
    
   scanf("%d%d",&a,&b);
    c=a-b;
    printf("\n answer : %d ",c);
    
     break;
    
    case 21 ... 30 : printf(" \n* mul :");
    
  scanf("%d%d",&a,&b);
    c=a*b;
    printf("\n answer :  %d ",c);
    
     break;
  
  
    case 31 ... 40 : printf("div :\n ");
   
    scanf("%d%d",&a,&b);
    c=a/b;
    printf("\nanswer :  %d ",c);
     break; 
  
 
 
  default : printf(". no no. bye");
    
    
   }
   
   getch();
   return 0;
   }