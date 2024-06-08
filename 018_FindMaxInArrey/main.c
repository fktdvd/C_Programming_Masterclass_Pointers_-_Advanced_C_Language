/**
 * Példa a Lecture 31-hez.
 * 2024-06-08
 * fktdvd
 */

#include <stdio.h>

#define SIZE 4

// A function to find and return a maximum in the arrey
int FindMaxInArrey(int *arr, int size)
{
    int max = 0;
    for (int i = 0; i < SIZE; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}

int main()
{

    int grades[SIZE] = {80, 85, 72, 90};
    int result;
    result = FindMaxInArrey(grades, SIZE);
    return 0;
}