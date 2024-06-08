/**
 * Példa a Lecture 34-hez.
 * 2024-06-08
 * fktdvd
 */

#include <stdio.h>

#define SIZE 4

// A function to find and return a Sum of the arrey
int SumArrey(int *arr, int size)
{
    int sum = 0;
    for (int i = 0; i < SIZE; i++)
    {
        sum += arr[i];
    }
    return sum;
}

// A function to find and return a Avg of the arrey
double AvgArrey(int *arr, int size)
{
    int sum = SumArrey(arr, SIZE);
    return (double)sum / size;
    // return sum / size;
}

int main()
{

    int grades[SIZE] = {80, 85, 72, 90};
    double result = AvgArrey(grades, SIZE);
    printf("%f\n", result);
    return 0;
}
