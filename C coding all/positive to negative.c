#include <stdio.h>
#include<conio.h>

int main() {
    int num;
    clrscr() ;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num > 0) {
        printf("The number is positive. Changing to negative: %d\n", -num);
    } else if (num < 0) {
        printf("The number is negative. Changing to positive: %d\n", -num);
    } else {
        printf("The number is zero.\n");
    }
    getch();
 
    return 0;
    
}