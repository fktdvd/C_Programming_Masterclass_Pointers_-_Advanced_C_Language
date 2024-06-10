/**
 * Példa a Lecture 36-hez.
 * 2024-06-10
 * fktdvd
 */

#include <stdio.h>

// #define SIZE 4

void minmax(int *pArr, int size, int *minValue, int *maxValue)
{
    int i;
    *minValue = pArr[0];
    *maxValue = pArr[0];
    for (int i = 1; i < size; i++)
    {
        if (pArr[i] < *minValue)
            *minValue = pArr[i];
        if (pArr[i] > *maxValue)
            *maxValue = pArr[i];
    }
}

int main()
{
    int myGrades[] = {80, 90, 100};
    int min, max;

    minmax(myGrades, 3, &min, &max);

    printf("The maximum value in your grades: %d\n", max);
    printf("The maximum value in your grades: %d\n", min);

    return 0;
}