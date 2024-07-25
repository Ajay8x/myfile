#include <stdio.h>

void main()
{
    int age[] = {23, 45, 45, 67, 43, 56, 65, 45, 19, 20};
    int maxage = age[0];
    int length = sizeof(age) / sizeof(age[0]);
    int i;

    for (i = 0; i < length; i++)
    {
        if (age[i] > maxage)
        {
            maxage = age[i];
        }
    }

    printf("Minimum age: %d\n", maxage);
}