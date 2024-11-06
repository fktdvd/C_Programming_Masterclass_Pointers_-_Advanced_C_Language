/**
 * Példa a Lecture 41-hez.
 * 2024-06-12
 * Recursive solution
 * fktdvd
 */

/**
 * Write a function checks if the arrey is '"Really sorted", "Sorted", "Not Sorted".
 * RETURN 1 and PASS 1 by reference if the arrey is "Really sorted"
 * RETURN 1 and PASS 0 by reference if the arrey is "Sorted"
 * RETURN 0 and PASS 0 by reference if the arrey is "Not sorted"
 *
 * Example1: [1,2,5,7,10]  --> Really Sorted.   R-1 P-1     // For Any Pair: Left Element < Right Element
 * Example2: [1,2,2,5,10]  --> Sorted.          R-1 P-0     // For Any Pair: Left Element <= Right Element
 * Example3: [1,2,5,3,10]  --> Not Sorted.      R-0 P-0
 */

#include <stdio.h>

#define SIZE 5

// Recursive Approach - Solution
// Recursive Calls (with some logic behind them)
// Base / Stop Condition

int checkIsSortedRecursive(int *arr, int size, int *isReallySorted)
{
    int result;    // returned result
    if (size == 1) // The arrey has just one element
    {
        *isReallySorted = 1; // We will assume that the arrey is really sorted
        return 1;
    }
    result = checkIsSortedRecursive(arr, size - 1, isReallySorted);

    if (result != 0 && arr[size - 1] == arr[size - 2]) // If the arrey is Really Sorted / Sorted AND last elements are equal
    {
        *isReallySorted = 0;
    }
    if (result != 0 && arr[size - 1] < arr[size - 2]) // If the arrey is Really Sorted / Sorted AND the element on the right is less than the element on the left
    {
        *isReallySorted = 0;
        return 0;
    }
    return result;
}

void VarEval(int *pVar1, int *pVar2)
{
    // Check combinations of var1 and var2 using if statements
    if (*pVar1 == 0 && *pVar2 == 0)
    {
        // printf("b00\n");
        printf("Not Sorted!\n");
    }
    else if (*pVar1 == 0 && *pVar2 == 1)
    {
        // printf("b01\n");
        printf("Undefined combination!\n");
    }
    else if (*pVar1 == 1 && *pVar2 == 0)
    {
        // printf("b10\n");
        printf("Sorted!\n");
    }
    else if (*pVar1 == 1 && *pVar2 == 1)
    {
        // printf("b11\n");
        printf("Really Sorted!\n");
    }
    else
    {
        printf("Undefined combination\n");
    }
}

int main() 
{
    int var1 = -1;
    int var2 = -1;

    int arr[SIZE] = {1, 2, 5, 7, 10};
    var1 = checkIsSortedRecursive(arr, SIZE, &var2);
    VarEval(&var1, &var2);

    int arr2[SIZE] = {1, 2, 2, 5, 10};
    var1 = checkIsSortedRecursive(arr2, SIZE, &var2);
    VarEval(&var1, &var2);

    int arr3[SIZE] = {1, 2, 5, 3, 10};
    var1 = checkIsSortedRecursive(arr3, SIZE, &var2);
    VarEval(&var1, &var2);

    return 0;
}
