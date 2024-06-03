/**
 * Példa a Lecture 8-hoz.
 * 2024-05-31
 * fktdvd
 */

#include <stdio.h>

void main()
{
    int a = 5;
    int *p = NULL;      // NULL pointer létrehozásával meg lehet akadályzni, hogy egy pointer változó Run Time Error-t okozzon. 
    printf("%p\n", p);
    if (p != NULL)
        printf("%d\n", *p);
    else    
        printf("Null pointer dereferenced!\n");

    p = &a;
    
    printf("%d\n", a);
    printf("%p\n", &a);
    printf("%p\n", p);
    printf("%d\n", *p);
}