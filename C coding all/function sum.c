#include <stdio.h>
#include <conio.h>

int sum(int x, int y) {
    return x+y;
}

int main() {
    int x, y, z;

    printf("Enter two numbers: ");
    scanf("%d%d", &x, &y);

    z = sum(x, y);

    printf("Sum: %d", z);

    return 0;}