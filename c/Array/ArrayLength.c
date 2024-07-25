#include <stdio.h>
void main()
{
    int arr[] = {60, 40, 45, 66, 44, 23, 65, 34, 365, 6789};
    int i, length;
    length = sizeof(arr) / sizeof(arr[0]);

    {
        printf("%d\n", length);
    }
}