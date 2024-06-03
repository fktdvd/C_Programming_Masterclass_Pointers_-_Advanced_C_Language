/**
 * Példa a Lecture 8-hez.
 * 2024-05-31
 * fktdvd
 */

#include <stdio.h>

void main()
{
    int a = 5;      //variable declaration and init
    int *p = &a;    //pointer variable declaration and init

    printf("%d\n", a);      //print out the value of the "a" variable
    printf("%p\n", &a);     //print out the address of the "a" variable
    printf("%p\n", p);      //print out the value of the "p" pointer variable
    printf("%d\n", *p);     //print out the value pointed by the "p" pointer
}