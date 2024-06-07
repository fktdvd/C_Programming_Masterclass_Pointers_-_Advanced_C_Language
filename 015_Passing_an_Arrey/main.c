/**
 * Példa a Lecture 29-hez.
 * 2024-06-07
 * fktdvd
 */

#include <stdio.h>

// Function with arrey variable argument
int sumArrey(int arr[], int size)
{
    int i, sum = 0;
    for (i = 0; i < size; i++)
        sum = sum + arr[i];
    return sum;
}

// Function with pointer variable argument
int sumArrey2(int *ptr, int size)
{
    int i, sum = 0;
    for (i = 0; i < size; i++)
        sum = sum + ptr[i];
    return sum;
}

int main()
{
    int grades[3] = {3, 5, 7};
    // Call a function that will sum all arrey elements
    int result;
    result = sumArrey2(grades, 3);
    printf("%d\n", result);

    return 0;
}