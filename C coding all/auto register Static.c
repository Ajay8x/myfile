#include <stdio.h>

void increment();

int main() {
    increment();
    increment();
    increment();

    return 0;
}

void increment() {
   auto int i = 1;
    register int j=1;
    static int k = 1;
    printf("\n %d %d %d", i,j, k);
    i++;
    j++;
    k++;
}



    