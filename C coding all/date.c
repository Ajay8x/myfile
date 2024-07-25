#include <stdio.h>

int main() {
    int n, r, i;

    printf("Enter the day of September month date: ");
    scanf("%d", &n);

    i = n + 4;
    r = i % 7;

    if (r == 1) {
        printf("MON");
    }
    else if (r == 2) {
        printf("TUE");
    }
    else if (r == 3) {
        printf("WED");
    }
    else if (r == 4) {
        printf("THU");
    }
    else if (r == 5) {
        printf("FRI");
    }
    else if (r == 6) {
        printf("SAT");
    }
    else if (r == 0) {
        printf("SUN");
    }

    return 0;
}