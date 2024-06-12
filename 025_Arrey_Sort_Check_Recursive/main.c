/**
 * Példa a Lecture 41-hez.
 * 2024-06-12
 * Recursive solutioin
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

int SortCheck(int *pArr, int *pVar2, int size)
{

    int eq_flag = 0;
    for (int i = 0; i < size - 1; i++)
    {
        if (pArr[i] == pArr[i + 1])
        // Sorted
        {
            eq_flag = 1;
        }
        // Really Sorted
        else if (pArr[i] < pArr[i + 1])
        {
            *pVar2 = 1;
        }
        else
        // Not sorted
        {
            *pVar2 = 0;
            return 0;
        }
    }

    if (eq_flag == 1)
    {
        *pVar2 = 0;
    }
    return 1;
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
    var1 = SortCheck(arr, &var2, SIZE);
    VarEval(&var1, &var2);
    
    int arr2[SIZE] = {1, 2, 2, 5, 10};
    var1 = SortCheck(arr2, &var2, SIZE);
    VarEval(&var1, &var2);
    
    int arr3[SIZE] = {1, 2, 5, 3, 10};
    var1 = SortCheck(arr3, &var2, SIZE);
    VarEval(&var1, &var2);

    return 0;
}
