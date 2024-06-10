/**
 * Példa a Lecture 35-hez.
 * 2024-06-10
 * fktdvd
 */

#include <stdio.h>

#define SIZE 4

// InputArrey Function
void InputArrey(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("Enter value #%d:", i + 1);
        scanf("%d", &arr[i]);
    }
}

// DisplayArrey Function
void DisplayArrey(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("Value #%d: %d\n", i + 1, arr[i]);
    }
}

int main()
{
    int grades[SIZE];
    InputArrey(grades, SIZE);
    DisplayArrey(grades,SIZE);
    return 0;
}
