/**
 * Példa a Lecture 39-hez.
 * 2024-06-10
 * Work with neighbours
 * fktdvd
 */

/**
 * Function receives an arrey and its size.
 * Return 1, if the arrey has some elements which value equals to the sum of both its neighbours (right, left)
 * Return 0, if the above condition not true.
 *
 * Example #1 - [1,4,7,3,2] --> Return 1
 * Example #2 - [1,4,1,4,2] --> Return 0
 *
 */

#include <stdio.h>

#define SIZE 5

int neighborCheck(int *pArr, int size)
{
    
}

int main()
{
    int arr[SIZE] = {1, 4, 7, 3, 2};
    int retVal = neighborCheck(arr, SIZE);
    return 0;
}