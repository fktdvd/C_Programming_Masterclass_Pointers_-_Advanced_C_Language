/**
 * Példa a Lecture 26-hez.
 * void * points to an address of ANY TYPE of data
 * 2024-06-03
 * fktdvd
 */

#include <stdio.h>

int main()
{
    int a = 10;
    void *ptr = &a;
    printf("%d\n", *(int*)ptr);   //explicit typecasting, meg kell adni, hogy hány byte memóriát akarunk kiolvasni

    return 0;

}