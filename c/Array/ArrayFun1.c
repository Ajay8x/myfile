#include <stdio.h>
                                                                                                        
int c;

void sum(int a, int b) {
    c = a + b;
    printf("\n sum = %d ", c);
}

void sub(int a, int b) {
    c = a - b;
    printf("\n sub = %d ", c);
}

void div(int a, int b) {
    c = b / a;
    printf("\n div = %d ", c);
}

void multi(int a, int b) {
    c = a * b;
    printf("\n multi = %d ", c);                                                                                                                                                                                                                    
}

int main() {
    int arr[] = {4, 5, 7, 8, 5, 54};
    
    sum(arr[5], arr[0]);
    sub(arr[5], arr[4]);
    div(arr[5], arr[3]);
    multi(arr[5], arr[1]);

    return 0;
}
