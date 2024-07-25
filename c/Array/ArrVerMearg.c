#include <stdio.h>

int main() {
    int arr1[4] = {1, 2, 3, 4};
    int arr2[5] = {5, 6, 7, 8, 9};
    int arr3[9];
    int i, m = 4, n = 5;

    // Copy elements from arr1 to arr3
    for(i = 0; i < m; i++) {
        arr3[i] = arr1[i];
    }

    // Copy elements from arr2 to arr3
    for(i = 0; i < n; i++) {
        arr3[i + m] = arr2[i];
    }

    // Print the merged array arr3
    printf("Merged array arr3:\n");
    for(i = 0; i < m + n; i++) {
        printf("%d ", arr3[i]);
    }

    return 0;
}
  