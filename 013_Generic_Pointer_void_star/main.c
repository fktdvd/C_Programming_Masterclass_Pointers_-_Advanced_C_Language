/**
 * Példa a Lecture 26-27-hez.
 * void * points to an address of ANY TYPE of data
 * 2024-06-05
 * fktdvd
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


void genericSwap(void *a, void *b, int size) // we assume that size > 0
{
    // size - specifies the number of bytes
    void *tempMemory = malloc(size);

    // Memory copy Function
    // void * memcpy(void *dest, const void *src, size_t num)
    memcpy(tempMemory, a, size);
    memcpy(a, b, size);
    memcpy(b, tempMemory, size);

    free(tempMemory);
}

int main()
{
    // int a = 10;
    // void *ptr = &a;
    // printf("%d\n", *(int *)ptr); // explicit typecasting, meg kell adni, hogy hány byte memóriát akarunk kiolvasni

    int num1 = 5, num2 = 7;
    printf("%d %d\n", num1, num2);
    genericSwap(&num1, &num2, sizeof(int));
    printf("%d %d\n", num1, num2);
    double dnum1 = 55.55, dnum2 = 66.66;
    genericSwap(&dnum1, &dnum2, sizeof(double));

    return 0;
}