#include <stdio.h>
void main()
{
    int arr[] = {60, 40};
    int i, sum = 0, avg, length = 0;
    length = sizeof(arr) / sizeof(arr[0]);
    for (i = 0; i < length; i++)

    {
        sum = sum + arr[i];
    }
    avg = sum / length;
    printf("%d \n ", avg);
}