#include <stdio.h>
#include<conio.h>

int main() {
    int m,d,r,c;
    clrscr();

    printf("Enter the day of month 2023: ");
    scanf("%d",&m);
        printf("Enter the day : ");
    scanf("%d",&d);
    m>12;
    
    if((m==1)||(m==10))
    c==6;
    
    
   if((m==2)||(m==3)||(m==11))
    c==2;
    
   if((m==4)||(m==7))
    c==5;
    
   if(m==5)
    c==0;
    
   if(m==6)
    c==3;
    
   if(m==8)
    c==1;
    
    

    d = d + c;
    r = d % 7;

    if (r == 1) 
        printf("MON");
    
    if(r == 2) 
        printf("TUE");
    
     if (r == 3) 
        printf("WED");
    
     if (r == 4) 
        printf("THU");
    
     if (r == 5) 
        printf("FRI");
    
     if (r == 6) 
        printf("SAT");
    
     if (r == 0) 
        printf("SUN");
    
getch();
    return 0;
}