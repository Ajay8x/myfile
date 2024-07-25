#include <stdio.h>
int main(){
int age;

printf("Enter your age 🔻\n");
scanf("%d",&age);

printf("you have entered = %d as your age \n",age);

if (age>18)
{
printf("you can vote!");
}





else if(age>=10)
{
printf("you have kids \n No vote");
}

else if(age<=10)
{
printf("you have baby \n No vote");
}

else  {   printf("you can't vote ");
}

}
