#include <stdio.h>

int sum(int a, int b) {
    return a + b;
}

int main()
{
    int a = 3, b = 7;

    int c= sum(a, b);
    
    printf("Sum: %d\n",c);

    return 0;
}