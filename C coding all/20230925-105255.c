#include<stdio.h>
#include<conio.h>
int main(){
int i,n,sum=0;
printf("\n enter number of terms");
scanf("%d",&n);
for(i=3;i<=2*n-1;i=i+3){
sum=sum+i;}
printf("sum of 3 to %d is\n %d ",n,sum);
getch ();
return 0;
}