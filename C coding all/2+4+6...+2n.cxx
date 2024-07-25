#include <stdio.h>

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int sum = 0;
    for (int i = 2; i <= 2*n; i += 2) {
        sum += i;
    }

    printf("The sum of even numbers from 2 to 2n is: %d\n", sum);
    return 0;
}