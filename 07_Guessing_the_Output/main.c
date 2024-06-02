/**
 * Példa a Lecture 11-hez. 
 * Futtatás nélkül kell megállapítani, hogy mi lesz az eredmény
 * 2024-06-02
 * fktdvd
 */

#include <stdio.h>

int main()
{
    int num1 = 5, num2 = 7;
    int *ptrA, *ptrB;

    //Console: num1 = 5 num2 = 7
    printf("num1 = %d, num2 = %d \n", num1, num2);

    ptrA = &num1;
    ptrB = &num2;

    //Console: num1 = 5 num2 = 7
    printf("num1 = %d, num2 = %d \n", num1, num2);

    *ptrA = *ptrA + 1;
    *ptrB = *ptrB + 3;

    //Console: num1 = 6 num2 = 10
    printf("num1 = %d, num2 = %d \n", num1, num2);

    ptrA = ptrB;
    ptrB = ptrA;

    //Console: num1 = 6 num2 = 10
    printf("num1 = %d, num2 = %d \n", num1, num2);
    //Console: *ptrA = 10, *ptrB = 10
    printf("*ptrA = %d, *ptrB = %d \n", *ptrA, *ptrB);

    num1 = *ptrB;
    num2 = num1 - 3;

    //Console: num1 = 10, num2 = 7
    printf("num1 = %d, num2 = %d \n", num1, num2);

    return 0;
}