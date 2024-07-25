#include<stdio.h>
#include<conio.h>
int main(){
int i,n,sum=0;
printf("\n enter number of terms");
scanf("%d",&n);
for(i=1;i<=n;i++){
sum=sum+i;}
printf("sum of 1 to %d is %d ",n,sum);
getch ();
return 0;
}