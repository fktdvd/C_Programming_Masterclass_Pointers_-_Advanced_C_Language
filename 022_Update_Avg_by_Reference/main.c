/**
 * Példa a Lecture 37-hez.
 * 2024-06-10
 * fktdvd
 */

#include <stdio.h>

#define SIZE 4

// The function should receive 2 values and update by reference the average
// Function SHOULD NOT print/return anything.

void updateAverage(int *pArr, int size, double *pAvg)
{
    int sum = 0;
    for (int i = 0; i < SIZE; i++)
    {
        sum += pArr[i];
    }

    *pAvg = sum / size;
}

int main()
{
    int arr[SIZE] = {80, 85, 72, 90};
    double avg = 0;
    updateAverage(arr, SIZE, &avg);
    printf("%f\n",avg);
    return 0;
}