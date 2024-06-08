/**
 * Példa a Lecture 30-hez.
 * 2024-06-08
 * fktdvd
 */

#include <stdio.h>

#define SIZE 4

// A function to search if an element is in the given arrey
int FindIfKeyInArrey(int *arr, int size, int key)
{
    for (int i = 0; i < SIZE; i++)
    {
        if (arr[i] == key)
            return 1;
    }
    return 0;
}

int main()
{
    
    int grades[SIZE] = {80, 85, 72, 90};
    int result;
    result = FindIfKeyInArrey(grades,SIZE,100);
    return 0;
}